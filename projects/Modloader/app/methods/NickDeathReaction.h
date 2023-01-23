#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NickDeathReaction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/NickDeathReaction_DeathState__Enum.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::NickDeathReaction {
    IL2CPP_REGISTER_METHOD(0x005FC700, void, OnInitializeTask, (app::NickDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FC990, void, StartTimeline, (app::NickDeathReaction * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x005FC9C0, void, ResetTimeline, (app::NickDeathReaction * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x005FCBE0, void, HandleCollision, (app::NickDeathReaction * this_ptr, app::MoonControllerColliderHit hit))
    IL2CPP_REGISTER_METHODINFO(0x04720C48, NickDeathReaction_HandleCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005FCC40, app::NickDeathReaction_DeathState__Enum, GetNextOnHitGroundState, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FCC70, void, OnEnterTask, (app::NickDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FCDF0, app::BehaviourStatus__Enum, OnExecuteTask, (app::NickDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FCE10, void, OnExitTask, (app::NickDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005FCE50, void, SetState, (app::NickDeathReaction * this_ptr, app::NickDeathReaction_DeathState__Enum state))
    IL2CPP_REGISTER_METHOD(0x005FCFF0, void, EnterState, (app::NickDeathReaction * this_ptr, app::NickDeathReaction_DeathState__Enum state))
    IL2CPP_REGISTER_METHOD(0x005FD150, void, ExitState, (app::NickDeathReaction * this_ptr, app::NickDeathReaction_DeathState__Enum state))
    IL2CPP_REGISTER_METHOD(0x005FD180, void, UpdateState, (app::NickDeathReaction * this_ptr, app::NickDeathReaction_DeathState__Enum state))
    IL2CPP_REGISTER_METHOD(0x005FD4A0, void, EnterHit, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD4E0, void, EnterSpin, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD510, void, EnterFall, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD540, void, EnterBounce, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD5E0, void, EnterDeathEnd, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitHit, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitSpin, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitFall, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitBounce, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD610, void, ExitDeathEnd, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD620, void, UpdateHit, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateSpin, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFall, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD740, void, UpdateBounce, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD860, void, UpdateDeathEnd, (app::NickDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FD940, app::Vector3, ProcessRootMotion, (app::NickDeathReaction * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x005FD990, void, ctor, (app::NickDeathReaction * this_ptr))
} // namespace app::classes::NickDeathReaction
