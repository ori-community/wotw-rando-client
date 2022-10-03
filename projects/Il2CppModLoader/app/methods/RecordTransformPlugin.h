#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RecordTransformPlugin {
    IL2CPP_REGISTER_METHOD(0x00735C80, void, Awake, (app::RecordTransformPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00735D40, void, OnDestroy, (app::RecordTransformPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::RecordTransformPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00735E00, app::Vector4, QuaternionToVector, (app::RecordTransformPlugin * this_ptr, app::Quaternion q))
    IL2CPP_REGISTER_METHOD(0x00735E30, void, RecordCycle, (app::RecordTransformPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00735F00, void, Exit, (app::RecordTransformPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RecordTransformPlugin * this_ptr))
} // namespace app::classes::RecordTransformPlugin
