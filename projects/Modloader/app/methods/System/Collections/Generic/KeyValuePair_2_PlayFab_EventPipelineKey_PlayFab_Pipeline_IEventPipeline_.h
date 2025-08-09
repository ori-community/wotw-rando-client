#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventPipelineKey__Enum.h>
#include <Modloader/app/structs/IEventPipeline.h>
#include <Modloader/app/structs/KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___Boxed.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_ {
    IL2CPP_REGISTER_METHOD(
        0x0010E170,
        app::EventPipelineKey__Enum,
        get_Key,
        app::KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00107C10,
        app::IEventPipeline*,
        get_Value,
        app::KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___Boxed* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_
