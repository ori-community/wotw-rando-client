#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AreaMapCanvas.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/WorldMapAreaState__Enum.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::AreaMapCanvas {
    IL2CPP_REGISTER_METHOD(0x00508FE0, bool, get_WantsToUpdateMask, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00508FF0, void, set_WantsToUpdateMask, (app::AreaMapCanvas * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00509000, void, Awake, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005090C0, void, Init, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00509920, void, ResetMap, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00509DD0, app::Texture*, get_WorldMapTexture, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00509DF0, app::Bounds, get_Bounds, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00509E30, app::CageStructureTool*, get_CageStructureTool, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00509E50, app::Vector2, get_WorldMapTextureSize, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00509EE0, app::Color, GetColor, (app::AreaMapCanvas * this_ptr, app::WorldMapAreaState__Enum world_state))
    IL2CPP_REGISTER_METHOD(0x00509FF0, void, GenerateAreaMaskTexture, (app::AreaMapCanvas * this_ptr, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0050A940, void, Update, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050AAF0, void, UpdateAreaMaskTextureA, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050ABC0, void, UpdateAreaMaskTextureB, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050AC90, void, SetFade, (app::AreaMapCanvas * this_ptr, float fade))
    IL2CPP_REGISTER_METHOD(0x0050AD50, void, OnDestroy, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050AD50, void, DestroyResources, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050AEE0, void, BlurTextures, (app::AreaMapCanvas * this_ptr, app::RenderTexture* original_texture, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0050B250, void, ReleaseAreaMaskTextureB, (app::AreaMapCanvas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050B260, void, ctor, (app::AreaMapCanvas * this_ptr))
} // namespace app::classes::AreaMapCanvas
