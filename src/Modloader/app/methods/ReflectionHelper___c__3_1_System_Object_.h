#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/IEnumerable_1_System_Type_.h>
#include <Modloader/app/structs/ReflectionHelper_c_3_1_System_Object_.h>

namespace app::classes::ReflectionHelper___c__3_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019DE4F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::ReflectionHelper_c_3_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E39A70,
        app::IEnumerable_1_System_Type_*,
        _GetAllTypesAssignableFrom_b__3_0,
        app::ReflectionHelper_c_3_1_System_Object_* this_ptr,
        app::Assembly* s
    )
} // namespace app::classes::ReflectionHelper___c__3_1_System_Object_
