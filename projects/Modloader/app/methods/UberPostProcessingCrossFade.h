#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation.h>

namespace app::classes::UberPostProcessingCrossFade {
    IL2CPP_REGISTER_METHOD(0x018F6430, app::Material*, get_Material, (app::UberPostProcessingCrossFade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F6630, void, Update, (app::UberPostProcessingCrossFade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F67C0, void, Awake, (app::UberPostProcessingCrossFade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F6850, void, StartCrossFade, (app::UberPostProcessingCrossFade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F68C0, void, StopCrossFade, (app::UberPostProcessingCrossFade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F6920, void, GenerateBuffer, (app::UberPostProcessingCrossFade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F6B90, void, OnRenderImage, (app::UberPostProcessingCrossFade * this_ptr, app::RenderTexture* from, app::RenderTexture* to))
    IL2CPP_REGISTER_METHOD(0x018F6FB0, void, LateUpdate, (app::UberPostProcessingCrossFade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F7210, void, ApplySettings, (app::UberPostProcessingCrossFade * this_ptr, app::UberPostProcessingCrossFade_CameraInformation* info))
    IL2CPP_REGISTER_METHOD(0x018F73D0, void, OnDestroy, (app::UberPostProcessingCrossFade * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberPostProcessingCrossFade * this_ptr))
} // namespace app::classes::UberPostProcessingCrossFade
