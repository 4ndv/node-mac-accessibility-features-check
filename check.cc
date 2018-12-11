// Yes, I KNOW that my C++ is very bad. I'm never used C++ in my whole life before. Sorry for the following code.

#include <nan.h>
#include <ApplicationServices/ApplicationServices.h>

void Check(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  const void* keys[] = { kAXTrustedCheckOptionPrompt };
  const void* falseValue[] = { kCFBooleanFalse };

  CFDictionaryRef options = CFDictionaryCreate(NULL, keys, falseValue, 1, NULL, NULL);

  bool result = AXIsProcessTrustedWithOptions(options);

  CFRelease(options);

  info.GetReturnValue().Set(Nan::New(result));
}

void CheckAndPrompt(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  const void* keys[] = { kAXTrustedCheckOptionPrompt };
  const void* trueValue[] = { kCFBooleanTrue };

  CFDictionaryRef options = CFDictionaryCreate(NULL, keys, trueValue, 1, NULL, NULL);

  bool result = AXIsProcessTrustedWithOptions(options);

  CFRelease(options);

  info.GetReturnValue().Set(Nan::New(result));
}

void Init(v8::Local<v8::Object> exports) {
  exports->Set(Nan::New("check").ToLocalChecked(), Nan::New<v8::FunctionTemplate>(Check)->GetFunction());
  exports->Set(Nan::New("checkAndPrompt").ToLocalChecked(), Nan::New<v8::FunctionTemplate>(CheckAndPrompt)->GetFunction());
}

NODE_MODULE(check, Init)
