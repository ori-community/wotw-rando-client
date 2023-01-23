#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossLegStompBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/Enum.h>

namespace app::classes::PetrifiedOwlBossLegStompBehaviour {
    IL2CPP_REGISTER_METHOD(0x017774B0, void, CopyData, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017775A0, void, OnEnter, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017777F0, void, OnExit, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017779D0, void, OnBeamSpawnEvent, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A8F8, PetrifiedOwlBossLegStompBehaviour_OnBeamSpawnEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01777DF0, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01777E90, app::Enum, Evaluate, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossLegStompBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossLegStompBehaviour
