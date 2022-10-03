#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Utilities::JsonTokenUtils {
    IL2CPP_REGISTER_METHOD(0x0301D9F0, bool, IsEndToken, (app::JsonToken__Enum_1 token))
    IL2CPP_REGISTER_METHOD(0x0301DA00, bool, IsStartToken, (app::JsonToken__Enum_1 token))
    IL2CPP_REGISTER_METHOD(0x0301DA10, bool, IsPrimitiveToken, (app::JsonToken__Enum_1 token))
} // namespace app::classes::Newtonsoft::Json::Utilities::JsonTokenUtils
