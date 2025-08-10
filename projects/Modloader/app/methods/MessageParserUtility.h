#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::MessageParserUtility {
    IL2CPP_REGISTER_METHOD(0x0159B7F0, app::String__Array*, ProcessStringArray, app::String* s)
    IL2CPP_REGISTER_METHOD(0x0159B9B0, app::String*, ProcessString, app::String* s)
    IL2CPP_REGISTER_METHOD(0x0159D370, void, Replace, app::String* replace, app::String* with)
    IL2CPP_REGISTER_METHOD(0x0159D470, void, ProcessColorsInString, app::StringBuilder* builder)
} // namespace app::classes::MessageParserUtility
