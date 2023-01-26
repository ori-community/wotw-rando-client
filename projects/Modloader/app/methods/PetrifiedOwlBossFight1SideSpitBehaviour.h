#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFight1SideSpitBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>

namespace app::classes::PetrifiedOwlBossFight1SideSpitBehaviour {
    IL2CPP_REGISTER_METHOD(0x0176B3E0, float, get_BaseDirectionAngle, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176B410, void, CopyData, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176B5D0, void, OnEnter, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0176B930, void, OnExit, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0176BC10, void, OnShootEvent, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176C1A0, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176C240, app::Enum, Evaluate, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176C2E0, void, ctor, (app::PetrifiedOwlBossFight1SideSpitBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1SideSpitBehaviour
