#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberShader::optimizations::atlassing::UberShaderAtlasBuildValidator {
    IL2CPP_REGISTER_METHOD(0x018FD510, void, FlushChecksForScene, (app::String * scene, app::String* area))
    IL2CPP_REGISTER_METHOD(0x018FD780, void, FlushChecksForPrefabs, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateBlock, (app::UberShaderBlockTextured * block))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberShaderAtlasBuildValidator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018FD9D0, void, cctor, ())
} // namespace app::classes::UberShader::optimizations::atlassing::UberShaderAtlasBuildValidator
