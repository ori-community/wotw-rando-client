#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseInvokableCall.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Events_BaseInvokableCall_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Events_BaseInvokableCall_.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Events_BaseInvokableCall_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Events_BaseInvokableCall_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_UnityEngine_Events_BaseInvokableCall_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_UnityEngine_Events_BaseInvokableCall_* this_ptr, app::BaseInvokableCall* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::BaseInvokableCall*, get_Item, app::List_1_UnityEngine_Events_BaseInvokableCall_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_UnityEngine_Events_BaseInvokableCall_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_UnityEngine_Events_BaseInvokableCall_* this_ptr, app::BaseInvokableCall* item)
    IL2CPP_REGISTER_METHOD(
        0x02F1EFE0,
        int32_t,
        RemoveAll,
        app::List_1_UnityEngine_Events_BaseInvokableCall_* this_ptr,
        app::Predicate_1_UnityEngine_Events_BaseInvokableCall_* match
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_UnityEngine_Events_BaseInvokableCall_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_UnityEngine_Events_BaseInvokableCall_* this_ptr,
        app::IEnumerable_1_UnityEngine_Events_BaseInvokableCall_* collection
    )
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Events_BaseInvokableCall_
