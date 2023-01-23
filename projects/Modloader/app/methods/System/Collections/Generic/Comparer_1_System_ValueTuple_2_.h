#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Comparer_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/Comparer_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Object_Single_.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_ValueTuple_2_*, get_Default_1, ())
    IL2CPP_REGISTER_METHOD(0x028C69F0, app::Comparer_1_System_ValueTuple_2_*, Create_1, (app::Comparison_1_ValueTuple_2_Int32_Object_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0470D848, Comparer_1_System_ValueTuple_2__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C6BF0, app::Comparer_1_System_ValueTuple_2_*, CreateComparer_1, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare_1, (app::Comparer_1_System_ValueTuple_2_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, (app::Comparer_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_ValueTuple_2__1*, get_Default_2, ())
    IL2CPP_REGISTER_METHOD(0x028C71C0, app::Comparer_1_System_ValueTuple_2__1*, Create_2, (app::Comparison_1_ValueTuple_2_Object_Object_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x047261F0, Comparer_1_System_ValueTuple_2__1_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C73C0, app::Comparer_1_System_ValueTuple_2__1*, CreateComparer_2, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare_2, (app::Comparer_1_System_ValueTuple_2__1 * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_2, (app::Comparer_1_System_ValueTuple_2__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_ValueTuple_2__2*, get_Default_3, ())
    IL2CPP_REGISTER_METHOD(0x028C7990, app::Comparer_1_System_ValueTuple_2__2*, Create_3, (app::Comparison_1_ValueTuple_2_Object_Single_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04753A28, Comparer_1_System_ValueTuple_2__2_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028C7B90, app::Comparer_1_System_ValueTuple_2__2*, CreateComparer_3, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare_3, (app::Comparer_1_System_ValueTuple_2__2 * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_3, (app::Comparer_1_System_ValueTuple_2__2 * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_ValueTuple_2_
