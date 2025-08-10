#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_System_Collections_Generic_KeyValuePair_2__1.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_UberID_System_Boolean_.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_Moon_UberID_System_Boolean_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_KeyValuePair_2_Moon_UberID_System_Boolean_.h>

namespace app::classes::System::Collections::Generic::List_1_KeyValuePair_2_Moon_UberID_System_Boolean__ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_KeyValuePair_2_Moon_UberID_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E8DE0,
        void,
        Add,
        app::List_1_KeyValuePair_2_Moon_UberID_System_Boolean_* this_ptr,
        app::KeyValuePair_2_Moon_UberID_System_Boolean_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_KeyValuePair_2_Moon_UberID_System_Boolean_* this_ptr,
        app::Comparison_1_System_Collections_Generic_KeyValuePair_2__1* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9D20,
        app::List_1_T_Enumerator_KeyValuePair_2_Moon_UberID_System_Boolean_,
        GetEnumerator,
        app::List_1_KeyValuePair_2_Moon_UberID_System_Boolean_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_KeyValuePair_2_Moon_UberID_System_Boolean__
