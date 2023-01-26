#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Timeline_EventTriggerAnimator_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_Timeline_EventTriggerAnimator_, GetEnumerator, (app::List_1_Moon_Timeline_EventTriggerAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_Moon_Timeline_EventTriggerAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EventTriggerAnimator*, get_Item, (app::List_1_Moon_Timeline_EventTriggerAnimator_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Timeline_EventTriggerAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_2, (app::List_1_Moon_Timeline_EventTriggerAnimator_ * this_ptr, app::IEnumerable_1_Moon_Timeline_EventTriggerAnimator_* collection))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Timeline_EventTriggerAnimator_
