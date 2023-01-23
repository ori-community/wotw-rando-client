#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_System_SByte_.h>
#include <Modloader/app/structs/SByte__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_SByte_ {
    IL2CPP_REGISTER_METHOD(0x02021DC0, bool, Equals_1, (app::GenericEqualityComparer_1_System_SByte_ * this_ptr, int8_t x, int8_t y))
    IL2CPP_REGISTER_METHOD(0x02436310, int32_t, GetHashCode_1, (app::GenericEqualityComparer_1_System_SByte_ * this_ptr, int8_t obj))
    IL2CPP_REGISTER_METHOD(0x02AB1800, int32_t, IndexOf, (app::GenericEqualityComparer_1_System_SByte_ * this_ptr, app::SByte__Array* array, int8_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02022050, int32_t, LastIndexOf, (app::GenericEqualityComparer_1_System_SByte_ * this_ptr, app::SByte__Array* array, int8_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, (app::GenericEqualityComparer_1_System_SByte_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::GenericEqualityComparer_1_System_SByte_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericEqualityComparer_1_System_SByte_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_SByte_
