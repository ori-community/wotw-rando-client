#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_Moon_Timeline_ReadyToFinishAnimator_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ReadyToFinishAnimator_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Timeline_ReadyToFinishAnimator_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Timeline_ReadyToFinishAnimator_ {
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_Moon_Timeline_ReadyToFinishAnimator_* this_ptr,
        app::IEnumerable_1_Moon_Timeline_ReadyToFinishAnimator_* collection
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_Timeline_ReadyToFinishAnimator_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_Moon_Timeline_ReadyToFinishAnimator_,
        GetEnumerator,
        app::List_1_Moon_Timeline_ReadyToFinishAnimator_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_Timeline_ReadyToFinishAnimator_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Timeline_ReadyToFinishAnimator_
