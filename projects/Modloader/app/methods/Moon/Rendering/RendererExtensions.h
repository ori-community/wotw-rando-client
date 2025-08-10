#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Renderer.h>

namespace app::classes::Moon::Rendering::RendererExtensions {
    IL2CPP_REGISTER_METHOD(0x00EB3590, bool, IsVisible, app::Renderer* renderer, float z_world_near, float z_world_far)
}
