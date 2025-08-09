#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityReactions_ReactionInterruptionSuspensionEntry.h>
#include <Modloader/app/structs/List_1_EntityReactions_ReactionInterruptionSuspensionEntry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x0014CA00,
        void,
        ctor,
        app::List_1_T_Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry___Boxed* this_ptr,
        app::List_1_EntityReactions_ReactionInterruptionSuspensionEntry_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CA30, bool, MoveNext, app::List_1_T_Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CAF0, bool, MoveNextRare, app::List_1_T_Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00136440,
        app::EntityReactions_ReactionInterruptionSuspensionEntry,
        get_Current,
        app::List_1_T_Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0014CB40,
        app::Object*,
        IEnumerator_get_Current,
        app::List_1_T_Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014CC00, void, IEnumerator_Reset, app::List_1_T_Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_EntityReactions_ReactionInterruptionSuspensionEntry_
