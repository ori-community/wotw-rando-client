#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberAssetPrewarmContainer.h>

namespace app::classes::UberShader::optimizations::UberAssetPrewarmContainer {
    IL2CPP_REGISTER_METHOD(0x018FCF50, void, Awake, (app::UberAssetPrewarmContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberAssetPrewarmContainer * this_ptr))
} // namespace app::classes::UberShader::optimizations::UberAssetPrewarmContainer
