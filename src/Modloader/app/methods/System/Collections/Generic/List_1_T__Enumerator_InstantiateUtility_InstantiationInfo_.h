#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo.h>
#include <Modloader/app/structs/List_1_InstantiateUtility_InstantiationInfo_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_InstantiateUtility_InstantiationInfo___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_InstantiateUtility_InstantiationInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x0014D4F0,
        void,
        ctor,
        app::List_1_T_Enumerator_InstantiateUtility_InstantiationInfo___Boxed* this_ptr,
        app::List_1_InstantiateUtility_InstantiationInfo_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_InstantiateUtility_InstantiationInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D530, bool, MoveNext, app::List_1_T_Enumerator_InstantiateUtility_InstantiationInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D610, bool, MoveNextRare, app::List_1_T_Enumerator_InstantiateUtility_InstantiationInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00133F90,
        app::InstantiateUtility_InstantiationInfo,
        get_Current,
        app::List_1_T_Enumerator_InstantiateUtility_InstantiationInfo___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014D660, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_InstantiateUtility_InstantiationInfo___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D720, void, IEnumerator_Reset, app::List_1_T_Enumerator_InstantiateUtility_InstantiationInfo___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_InstantiateUtility_InstantiationInfo_
