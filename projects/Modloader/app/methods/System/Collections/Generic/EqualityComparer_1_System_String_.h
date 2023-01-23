#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777C48, EqualityComparer_1_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_String_*, get_Default, ())
    IL2CPP_REGISTER_METHODINFO(0x04711AB8, EqualityComparer_1_System_String__get_Default__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E64520, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_String_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x02E64430, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_String_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02E61BD0, int32_t, IndexOf, (app::EqualityComparer_1_System_String_ * this_ptr, app::String__Array* array, app::String* value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E61C80, int32_t, LastIndexOf, (app::EqualityComparer_1_System_String_ * this_ptr, app::String__Array* array, app::String* value, int32_t start_index, int32_t count))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_String_
