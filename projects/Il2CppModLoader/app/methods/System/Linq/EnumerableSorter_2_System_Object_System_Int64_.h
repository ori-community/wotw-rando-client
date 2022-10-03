#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::EnumerableSorter_2_System_Object_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x0289C9B0, void, ctor, (app::EnumerableSorter_2_System_Object_System_Int64_ * this_ptr, app::Func_2_Object_Int64_* key_selector, app::IComparer_1_System_Int64_* comparer, bool descending, app::EnumerableSorter_1_System_Object_* next))
    IL2CPP_REGISTER_METHOD(0x0289D6F0, void, ComputeKeys, (app::EnumerableSorter_2_System_Object_System_Int64_ * this_ptr, app::Object__Array* elements, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0289D0F0, int32_t, CompareKeys, (app::EnumerableSorter_2_System_Object_System_Int64_ * this_ptr, int32_t index1, int32_t index2))
} // namespace app::classes::System::Linq::EnumerableSorter_2_System_Object_System_Int64_
