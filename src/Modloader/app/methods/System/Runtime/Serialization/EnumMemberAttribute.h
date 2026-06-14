#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumMemberAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Serialization::EnumMemberAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Value, app::EnumMemberAttribute* this_ptr)
}
