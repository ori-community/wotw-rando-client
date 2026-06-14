#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Moon_SerializedBooleanUberState_.h>
#include <Modloader/app/structs/List_1_Moon_SerializedBooleanUberState_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_SerializedBooleanUberState_.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_SerializedBooleanUberState_ {
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_Moon_SerializedBooleanUberState_,
        GetEnumerator,
        app::List_1_Moon_SerializedBooleanUberState_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_SerializedBooleanUberState_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_SerializedBooleanUberState_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_Moon_SerializedBooleanUberState_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_Moon_SerializedBooleanUberState_* this_ptr, app::SerializedBooleanUberState* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_SerializedBooleanUberState_* this_ptr, app::SerializedBooleanUberState* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_SerializedBooleanUberState_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_Moon_SerializedBooleanUberState_* this_ptr,
        app::Comparison_1_Moon_SerializedBooleanUberState_* comparison
    )
} // namespace app::classes::System::Collections::Generic::List_1_Moon_SerializedBooleanUberState_
