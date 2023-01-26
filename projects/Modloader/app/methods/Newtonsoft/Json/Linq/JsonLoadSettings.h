#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CommentHandling__Enum.h>
#include <Modloader/app/structs/DuplicatePropertyNameHandling__Enum.h>
#include <Modloader/app/structs/JsonLoadSettings.h>
#include <Modloader/app/structs/LineInfoHandling__Enum.h>

namespace app::classes::Newtonsoft::Json::Linq::JsonLoadSettings {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::CommentHandling__Enum, get_CommentHandling, (app::JsonLoadSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::LineInfoHandling__Enum, get_LineInfoHandling, (app::JsonLoadSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::DuplicatePropertyNameHandling__Enum, get_DuplicatePropertyNameHandling, (app::JsonLoadSettings * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Linq::JsonLoadSettings
