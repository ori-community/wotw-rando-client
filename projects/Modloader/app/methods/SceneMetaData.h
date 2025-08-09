#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SceneMetaData {
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_SceneName, app::SceneMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAB260, app::String*, get_SceneGuid, app::SceneMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAB2C0, void, set_SceneGuid, app::SceneMetaData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00BAB460, app::Rect, get_SceneBounds, app::SceneMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::String*, get_SceneSolidsTexturePath, app::SceneMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A64240, app::String*, get_SceneTexturePath, app::SceneMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Texture*, get_SolidsSceneTexture, app::SceneMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Texture*, get_SceneTexture, app::SceneMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAB660, bool, get_CanBeLoaded, app::SceneMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAB750, bool, AnyPaddingBoundaryOverlaps, app::SceneMetaData* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x00BAB9A0, bool, IsInsideSceneBounds_1, app::SceneMetaData* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BABAE0, bool, IsInsideSceneBounds_2, app::SceneMetaData* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x00BABC40, bool, IsInsideSceneLoadingZone_1, app::SceneMetaData* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x00BABDA0, bool, IsInsideSceneLoadingZone_2, app::SceneMetaData* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x00BABED0, bool, IsInsideScenePaddingBounds_1, app::SceneMetaData* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00BAC010, bool, IsInsideScenePaddingBounds_2, app::SceneMetaData* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x00BAC170, void, CopySceneMetaData, app::SceneMetaData* from, app::SceneMetaData* to)
    IL2CPP_REGISTER_METHOD(0x00BAC260, void, ctor, app::SceneMetaData* this_ptr)
} // namespace app::classes::SceneMetaData
