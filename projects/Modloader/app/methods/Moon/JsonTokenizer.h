#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JsonToken__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Substr.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::Moon::JsonTokenizer {
    IL2CPP_REGISTER_METHOD(0x030F0670, app::JsonToken__Enum, Next, (app::String * json, app::Substr span, app::Substr* remainder, app::StringBuilder* buffer, double* number))
    IL2CPP_REGISTER_METHODINFO(0x0475DA10, JsonTokenizer_Next__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030F0AD0, void, ParseString, (app::String * json, app::Substr* remainder, app::StringBuilder* buffer))
    IL2CPP_REGISTER_METHODINFO(0x04786F88, JsonTokenizer_ParseString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030F0EA0, double, ParseNumber, (app::String * json, app::Substr span, app::Substr* remainder))
    IL2CPP_REGISTER_METHODINFO(0x0478B8D8, JsonTokenizer_ParseNumber__MethodInfo)
} // namespace app::classes::Moon::JsonTokenizer
