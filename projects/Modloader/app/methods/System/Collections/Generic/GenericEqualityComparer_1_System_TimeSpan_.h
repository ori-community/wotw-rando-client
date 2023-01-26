#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericEqualityComparer_1_System_TimeSpan_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TimeSpan__Array.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_TimeSpan_ {
    IL2CPP_REGISTER_METHOD(0x01652210, bool, Equals_1, (app::GenericEqualityComparer_1_System_TimeSpan_ * this_ptr, app::TimeSpan x, app::TimeSpan y))
    IL2CPP_REGISTER_METHOD(0x02435B40, int32_t, GetHashCode_1, (app::GenericEqualityComparer_1_System_TimeSpan_ * this_ptr, app::TimeSpan obj))
    IL2CPP_REGISTER_METHOD(0x02AB1480, int32_t, IndexOf, (app::GenericEqualityComparer_1_System_TimeSpan_ * this_ptr, app::TimeSpan__Array* array, app::TimeSpan value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB14E0, int32_t, LastIndexOf, (app::GenericEqualityComparer_1_System_TimeSpan_ * this_ptr, app::TimeSpan__Array* array, app::TimeSpan value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, (app::GenericEqualityComparer_1_System_TimeSpan_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::GenericEqualityComparer_1_System_TimeSpan_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericEqualityComparer_1_System_TimeSpan_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_TimeSpan_
