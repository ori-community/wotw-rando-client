#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_KeyValuePair_2_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/Comparison_1_System_Collections_Generic_KeyValuePair_2__10.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Boolean_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_KeyValuePair_2_System_Object_System_Boolean__ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_KeyValuePair_2_System_Object_System_Boolean_* this_ptr,
        app::Comparison_1_System_Collections_Generic_KeyValuePair_2__10* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_KeyValuePair_2_System_Object_System_Boolean_* this_ptr,
        app::KeyValuePair_2_System_Object_System_Boolean_ x,
        app::KeyValuePair_2_System_Object_System_Boolean_ y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_KeyValuePair_2_System_Object_System_Boolean__
