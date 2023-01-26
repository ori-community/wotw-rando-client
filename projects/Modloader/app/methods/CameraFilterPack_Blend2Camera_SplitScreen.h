#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_SplitScreen.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blend2Camera_SplitScreen {
    IL2CPP_REGISTER_METHOD(0x02760020, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_SplitScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02760200, void, Start, (app::CameraFilterPack_Blend2Camera_SplitScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02760620, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_SplitScreen * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02760A50, void, OnValidate, (app::CameraFilterPack_Blend2Camera_SplitScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02760B10, void, Update, (app::CameraFilterPack_Blend2Camera_SplitScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02760CB0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_SplitScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02760CC0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_SplitScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02760EB0, void, ctor, (app::CameraFilterPack_Blend2Camera_SplitScreen * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_SplitScreen
