#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_System_ValueTuple_4_.h>
#include <Modloader/app/structs/Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Int32_Int32_Single_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_ValueTuple_4_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_System_ValueTuple_4_* this_ptr,
        app::Comparison_1_ValueTuple_4_Object_Int32_Int32_Single_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A0E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_System_ValueTuple_4_* this_ptr,
        app::ValueTuple_4_Object_Int32_Int32_Single_ x,
        app::ValueTuple_4_Object_Int32_Int32_Single_ y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_System_ValueTuple_4_
