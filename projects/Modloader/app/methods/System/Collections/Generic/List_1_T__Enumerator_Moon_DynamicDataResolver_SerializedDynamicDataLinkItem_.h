#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicDataResolver_SerializedDynamicDataLinkItem.h>
#include <Modloader/app/structs/List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ {
    IL2CPP_REGISTER_METHOD(
        0x001350C0,
        app::DynamicDataResolver_SerializedDynamicDataLinkItem,
        get_Current,
        app::List_1_T_Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00152E30, bool, MoveNext, app::List_1_T_Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00152DF0,
        void,
        ctor,
        app::List_1_T_Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Boxed* this_ptr,
        app::List_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_* list
    )
    IL2CPP_REGISTER_METHOD(0x00152F20, bool, MoveNextRare, app::List_1_T_Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00152F80,
        app::Object*,
        IEnumerator_get_Current,
        app::List_1_T_Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00153050,
        void,
        IEnumerator_Reset,
        app::List_1_T_Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_
