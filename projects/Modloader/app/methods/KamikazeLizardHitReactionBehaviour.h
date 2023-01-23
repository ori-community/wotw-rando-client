#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KamikazeLizardHitReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::KamikazeLizardHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E5BE20, void, OnInitializeTask, (app::KamikazeLizardHitReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E5BF10, void, StartTimeline, (app::KamikazeLizardHitReactionBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00E5BF50, void, ctor, (app::KamikazeLizardHitReactionBehaviour * this_ptr))
} // namespace app::classes::KamikazeLizardHitReactionBehaviour
