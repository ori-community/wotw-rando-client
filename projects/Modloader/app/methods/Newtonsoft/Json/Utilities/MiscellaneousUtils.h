#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Utilities::MiscellaneousUtils {
    IL2CPP_REGISTER_METHOD(0x0301E210, bool, ValueEquals, (app::Object * obj_a, app::Object* obj_b))
    IL2CPP_REGISTER_METHOD(0x0301E580, app::ArgumentOutOfRangeException*, CreateArgumentOutOfRangeException, (app::String * param_name, app::Object* actual_value, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0301E740, app::String*, ToString, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0301E820, int32_t, ByteArrayCompare, (app::Byte__Array * a1, app::Byte__Array* a2))
    IL2CPP_REGISTER_METHOD(0x0301E8C0, app::String*, GetPrefix, (app::String * qualified_name))
    IL2CPP_REGISTER_METHOD(0x0301E950, app::String*, GetLocalName, (app::String * qualified_name))
    IL2CPP_REGISTER_METHOD(0x0301E9D0, void, GetQualifiedNameParts, (app::String * qualified_name, app::String** prefix, app::String** local_name))
    IL2CPP_REGISTER_METHOD(0x0301EA80, app::RegexOptions__Enum, GetRegexOptions, (app::String * options_text))
} // namespace app::classes::Newtonsoft::Json::Utilities::MiscellaneousUtils
