#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallRequestContainer.h>
#include <Modloader/app/structs/IEnumerable_1_PlayFab_Internal_CallRequestContainer_.h>
#include <Modloader/app/structs/List_1_PlayFab_Internal_CallRequestContainer_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_PlayFab_Internal_CallRequestContainer_.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_Internal_CallRequestContainer_ {
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_PlayFab_Internal_CallRequestContainer_,
        GetEnumerator,
        app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1EA40,
        void,
        Insert,
        app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr,
        int32_t index,
        app::CallRequestContainer* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr,
        app::IEnumerable_1_PlayFab_Internal_CallRequestContainer_* collection
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CallRequestContainer*, get_Item, app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_PlayFab_Internal_CallRequestContainer_* this_ptr, app::CallRequestContainer* item)
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_Internal_CallRequestContainer_
