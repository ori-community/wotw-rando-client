#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SneezeSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SneezeSlugFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00EDCE30, void, OnEnterLand, (app::SneezeSlugFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDCF10, void, OnInitializeTask, (app::SneezeSlugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EDD0D0, void, StopKnockupTimeline, (app::SneezeSlugFallReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00733FD0, void, ctor, (app::SneezeSlugFallReactionBehaviour * this_ptr))
} // namespace app::classes::SneezeSlugFallReactionBehaviour
