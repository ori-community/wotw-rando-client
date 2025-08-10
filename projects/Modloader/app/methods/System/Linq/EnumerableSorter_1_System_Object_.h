#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumerableSorter_1_System_Object_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Linq::EnumerableSorter_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0289C870, app::Int32__Array*, Sort, app::EnumerableSorter_1_System_Object_* this_ptr, app::Object__Array* elements, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0289C270, void, QuickSort, app::EnumerableSorter_1_System_Object_* this_ptr, app::Int32__Array* map, int32_t left, int32_t right)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EnumerableSorter_1_System_Object_* this_ptr)
} // namespace app::classes::System::Linq::EnumerableSorter_1_System_Object_
