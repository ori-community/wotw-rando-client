#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DataMemberAttribute.h>

namespace app::classes::System::Runtime::Serialization::DataMemberAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::DataMemberAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Order, (app::DataMemberAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_IsRequired, (app::DataMemberAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C46B0, bool, get_EmitDefaultValue, (app::DataMemberAttribute * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::DataMemberAttribute
