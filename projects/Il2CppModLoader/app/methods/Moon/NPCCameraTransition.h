#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::NPCCameraTransition {
    IL2CPP_REGISTER_METHOD(0x011202B0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x011202C0, app::Transform*, get_NpcTarget, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011205C0, app::Transform*, get_OpenStoreTarget, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011208C0, app::NPCCameraTransition*, get_ActiveTransiton, ())
    IL2CPP_REGISTER_METHOD(0x01120940, void, set_ActiveTransiton, (app::NPCCameraTransition * value))
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::NPCCameraBlendState__Enum, get_State, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011209D0, app::Vector3, Position, (app::NPCCameraTransition * this_ptr, app::NPCCameraTargetPositionType__Enum target))
    IL2CPP_REGISTER_METHOD(0x01120D40, app::Vector3, get_TargetPosition, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01120D80, app::Vector3, get_CurrentPosition, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01120F70, void, ChangePosition, (app::NPCCameraTransition * this_ptr, app::NPCCameraTargetPositionType__Enum target, float blend_time))
    IL2CPP_REGISTER_METHOD(0x01120FD0, float, get_BlendDuration, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011210D0, float, get_BlendTime, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01121100, app::CameraPuppetController*, get_Puppet, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011211C0, void, Register, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01121270, void, Unregister, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01121320, void, ChangeCameraState, (app::NPCCameraTransition * this_ptr, app::NPCCameraBlendState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::NPCCameraTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011218C0, void, OnUpdate, (app::NPCCameraTransition * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01121D90, void, ctor, (app::NPCCameraTransition * this_ptr))
} // namespace app::classes::Moon::NPCCameraTransition
