#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectComparer_1_System_ByteEnum_.h>
#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x01CC9D60, int32_t, Compare, (app::ObjectComparer_1_System_ByteEnum_ * this_ptr, app::ByteEnum__Enum x, app::ByteEnum__Enum y))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, (app::ObjectComparer_1_System_ByteEnum_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, (app::ObjectComparer_1_System_ByteEnum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectComparer_1_System_ByteEnum_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_System_ByteEnum_
