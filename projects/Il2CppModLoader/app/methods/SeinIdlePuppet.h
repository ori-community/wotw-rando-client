#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinIdlePuppet {
    IL2CPP_REGISTER_METHOD(0x0100D080, void, InstantiateLeaveTrails, (app::SeinIdlePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100D310, void, OnFinishedPlayback, (app::SeinIdlePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100D530, void, OnInitializeLivePuppetMaster, (app::SeinIdlePuppet * this_ptr, app::IPuppet* puppet_master))
    IL2CPP_REGISTER_METHOD(0x0100D570, void, OnInitializeGhostPuppetMaster, (app::SeinIdlePuppet * this_ptr, app::GhostPlayer* player))
    IL2CPP_REGISTER_METHOD(0x0100D730, void, OnInitializeGhostRecorder, (app::SeinIdlePuppet * this_ptr, app::GhostRecorder* recorder))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_Id, (app::SeinIdlePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100D800, void, FixedUpdate, (app::SeinIdlePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0100D810, void, RecordAnimationParameters, (app::SeinIdlePuppet * this_ptr, bool force_changes))
    IL2CPP_REGISTER_METHOD(0x0100DCC0, void, RecordParameterValue_1, (app::SeinIdlePuppet * this_ptr, app::FloatAnimationParameter* parameter, float value, bool force_changes))
    IL2CPP_REGISTER_METHOD(0x0100E2C0, void, RecordParameterValue_2, (app::SeinIdlePuppet * this_ptr, app::VectorAnimationParameter* parameter, app::Vector3 value, bool force_changes))
    IL2CPP_REGISTER_METHOD(0x0100E640, app::GameObject*, GetInstantiatedFieldValue, (app::SeinIdlePuppet * this_ptr, int32_t attribute_id))
    IL2CPP_REGISTER_METHOD(0x0100E670, void, ctor, (app::SeinIdlePuppet * this_ptr))
} // namespace app::classes::SeinIdlePuppet
