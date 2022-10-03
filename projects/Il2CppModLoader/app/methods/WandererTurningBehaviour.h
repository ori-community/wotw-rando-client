#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WandererTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TargetLookDirectionX, (app::WandererTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_TargetLookDirectionX, (app::WandererTurningBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x008D27C0, float, get_CurrentTurningDirection, (app::WandererTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::WandererTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008D27D0, void, OnInitializeTask, (app::WandererTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008D2950, bool, get_IsPlaying, (app::WandererTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D2A30, void, OnEnterTask, (app::WandererTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::WandererTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008D2CA0, app::BehaviourStatus__Enum, OnExecuteTask, (app::WandererTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008D2CE0, void, TurningFinished, (app::WandererTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792BD0, WandererTurningBehaviour_TurningFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008D2F30, void, PlayAnimation, (app::WandererTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D3370, void, SetAnimTime, (app::WandererTurningBehaviour * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x008D34D0, bool, ShouldEndBehaviour, (app::WandererTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::WandererTurningBehaviour * this_ptr))
} // namespace app::classes::WandererTurningBehaviour
