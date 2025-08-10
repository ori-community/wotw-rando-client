#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericComparer_1_System_Int32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericComparer_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B60220, int32_t, Compare, app::GenericComparer_1_System_Int32_* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals, app::GenericComparer_1_System_Int32_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, app::GenericComparer_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, app::GenericComparer_1_System_Int32_* this_ptr)
} // namespace app::classes::System::Collections::Generic::GenericComparer_1_System_Int32_
