#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/ComparisonComparer_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/ComparisonComparer_1_System_ValueTuple_2__2.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor_1,
        app::ComparisonComparer_1_System_ValueTuple_2_* this_ptr,
        app::Comparison_1_ValueTuple_2_Int32_Object_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare_1,
        app::ComparisonComparer_1_System_ValueTuple_2_* this_ptr,
        app::ValueTuple_2_Int32_Object_ x,
        app::ValueTuple_2_Int32_Object_ y
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor_2,
        app::ComparisonComparer_1_System_ValueTuple_2__1* this_ptr,
        app::Comparison_1_ValueTuple_2_Object_Object_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare_2,
        app::ComparisonComparer_1_System_ValueTuple_2__1* this_ptr,
        app::ValueTuple_2_Object_Object_ x,
        app::ValueTuple_2_Object_Object_ y
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor_3,
        app::ComparisonComparer_1_System_ValueTuple_2__2* this_ptr,
        app::Comparison_1_ValueTuple_2_Object_Single_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare_3,
        app::ComparisonComparer_1_System_ValueTuple_2__2* this_ptr,
        app::ValueTuple_2_Object_Single_ x,
        app::ValueTuple_2_Object_Single_ y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_ValueTuple_2_
