#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionInfo.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, app::Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D015C0,
        app::UberInteractionManager_InteractionInfo,
        get_Current,
        app::Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01CFEFD0,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, app::Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, )
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_UberInteractionManager_InteractionInfo_
