#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage.h>
#include <Modloader/app/structs/Queue_1_QuestsController_QueuedQuestMessage_.h>
#include <Modloader/app/structs/Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage___Boxed.h>

namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_QuestsController_QueuedQuestMessage_ {
    IL2CPP_REGISTER_METHOD(
        0x001ECB90,
        void,
        ctor,
        app::Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage___Boxed* this_ptr,
        app::Queue_1_QuestsController_QueuedQuestMessage_* q
    )
    IL2CPP_REGISTER_METHOD(0x001ECBC0, void, Dispose, app::Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EDBF0, bool, MoveNext, app::Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001EDC00,
        app::QuestsController_QueuedQuestMessage,
        get_Current,
        app::Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001EDC40, void, ThrowEnumerationNotStartedOrEnded, app::Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EDC50, app::Object*, IEnumerator_get_Current, app::Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EDD00, void, IEnumerator_Reset, app::Queue_1_T_Enumerator_QuestsController_QueuedQuestMessage___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_T__Enumerator_QuestsController_QueuedQuestMessage_
