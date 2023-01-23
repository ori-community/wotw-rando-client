#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GenericComparer_1_System_UInt32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericComparer_1_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x02B60460, int32_t, Compare, (app::GenericComparer_1_System_UInt32_ * this_ptr, uint32_t x, uint32_t y))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals, (app::GenericComparer_1_System_UInt32_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, (app::GenericComparer_1_System_UInt32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericComparer_1_System_UInt32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericComparer_1_System_UInt32_
