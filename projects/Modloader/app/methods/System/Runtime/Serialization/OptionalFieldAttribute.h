#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OptionalFieldAttribute.h>

namespace app::classes::System::Runtime::Serialization::OptionalFieldAttribute {
    IL2CPP_REGISTER_METHOD(0x00D34AF0, void, ctor, (app::OptionalFieldAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDBA80, void, set_VersionAdded, (app::OptionalFieldAttribute * this_ptr, int32_t value))
} // namespace app::classes::System::Runtime::Serialization::OptionalFieldAttribute
