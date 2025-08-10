#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChromaticAberration.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::ChromaticAberration {
    IL2CPP_REGISTER_METHOD(0x03040DA0, void, OnRenderImage, app::ChromaticAberration* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x03040FA0, app::String*, GetShaderName, app::ChromaticAberration* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03041020, void, ctor, app::ChromaticAberration* this_ptr)
} // namespace app::classes::Colorful::ChromaticAberration
