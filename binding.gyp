{
  "targets": [
    {
      "target_name": "mac-accessibility-features-check",
      "sources": [ "check.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ],
      "link_settings": {
        "libraries": [
          "$(SDKROOT)/System/Library/Frameworks/ApplicationServices.framework",
        ]
      }
    }
  ]
}
