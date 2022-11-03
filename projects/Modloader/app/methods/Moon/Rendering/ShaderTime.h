#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::ShaderTime {
    IL2CPP_REGISTER_METHOD(0x00EBB200, bool, get_freezeAll, ())
    IL2CPP_REGISTER_METHOD(0x00EBB340, void, set_freezeAll, (bool value))
    IL2CPP_REGISTER_METHOD(0x00EBB400, bool, get_freezeAny, ())
    IL2CPP_REGISTER_METHOD(0x00EBB510, bool, get_freezeAnyShader, ())
    IL2CPP_REGISTER_METHOD(0x00EBB620, bool, get_freezeCameraSwaying, ())
    IL2CPP_REGISTER_METHOD(0x00EBB6D0, void, set_freezeCameraSwaying, (bool value))
    IL2CPP_REGISTER_METHOD(0x00EBB7A0, bool, get_freezeShaderTime, ())
    IL2CPP_REGISTER_METHOD(0x00EBB850, void, set_freezeShaderTime, (bool value))
    IL2CPP_REGISTER_METHOD(0x00EBB920, bool, get_freezeShaderTurbulenceTime, ())
    IL2CPP_REGISTER_METHOD(0x00EBB9D0, void, set_freezeShaderTurbulenceTime, (bool value))
    IL2CPP_REGISTER_METHOD(0x00EBBAA0, bool, get_freezeShaderTurbulenceStrength, ())
    IL2CPP_REGISTER_METHOD(0x00EBBB50, void, set_freezeShaderTurbulenceStrength, (bool value))
    IL2CPP_REGISTER_METHOD(0x00EBBC20, bool, get_freezeShaderGameTime, ())
    IL2CPP_REGISTER_METHOD(0x00EBBCD0, void, set_freezeShaderGameTime, (bool value))
    IL2CPP_REGISTER_METHOD(0x00EBBDA0, void, setTimeConstants, (app::CommandBuffer * cmd))
    IL2CPP_REGISTER_METHOD(0x00EBC060, void, cctor, ())
} // namespace app::classes::Moon::Rendering::ShaderTime
