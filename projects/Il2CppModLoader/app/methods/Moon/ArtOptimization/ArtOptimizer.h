#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ArtOptimization::ArtOptimizer {
    IL2CPP_REGISTER_METHOD(0x01341260, void, add_OnEnterGettingReady, (app::ArtOptimizer * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01341350, void, remove_OnEnterGettingReady, (app::ArtOptimizer * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01341440, void, add_OnEnterMoving, (app::ArtOptimizer * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01341530, void, remove_OnEnterMoving, (app::ArtOptimizer * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01341620, void, add_OnEnterDone, (app::ArtOptimizer * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01341710, void, remove_OnEnterDone, (app::ArtOptimizer * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x01341800, void, Initialize, (app::String * scene_guid, app::IList_1_UberShaderComponent_ * uber_shaders))
    IL2CPP_REGISTER_METHOD(0x01341A10, bool, get_IsStopped, ())
    IL2CPP_REGISTER_METHOD(0x01341AB0, void, set_IsStopped, (bool value))
    IL2CPP_REGISTER_METHOD(0x01341B60, bool, get_IsRunning, ())
    IL2CPP_REGISTER_METHOD(0x01341C00, void, Stop, ())
    IL2CPP_REGISTER_METHOD(0x01341C90, void, StartTask_1, (app::ArtOptimizer * this_ptr, app::String * scene_guid, app::IList_1_UberShaderComponent_ * uber_shaders))
    IL2CPP_REGISTER_METHOD(0x01341CA0, void, StartTask_2, (app::ArtOptimizer * this_ptr, app::String * scene_guid))
    IL2CPP_REGISTER_METHOD(0x01341F80, void, ChangeState, (app::ArtOptimizer * this_ptr, app::ArtOptimizer_OptimizerState__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x01342080, void, Update, (app::ArtOptimizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01342310, void, UpdateState, (app::ArtOptimizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateIdle, (app::ArtOptimizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01342400, void, UpdateDone, (app::ArtOptimizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013424A0, void, UpdatePrepareSamples, (app::ArtOptimizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01342750, void, UpdateProcessing, (app::ArtOptimizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013429B0, void, UpdateGettingReady, (app::ArtOptimizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01344850, void, ctor, (app::ArtOptimizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01344E50, void, cctor, ())
}
