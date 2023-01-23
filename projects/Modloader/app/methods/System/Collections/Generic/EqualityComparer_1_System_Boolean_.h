#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_System_Boolean_.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Boolean_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02D9A7D0, app::EqualityComparer_1_System_Boolean_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02D9B130, int32_t, IndexOf, (app::EqualityComparer_1_System_Boolean_ * this_ptr, app::Boolean__Array* array, bool value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D9B1E0, int32_t, LastIndexOf, (app::EqualityComparer_1_System_Boolean_ * this_ptr, app::Boolean__Array* array, bool value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D9B290, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_Boolean_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D9B380, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_Boolean_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_Boolean_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Boolean_
