#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneTracking.h>
#include <Modloader/app/structs/SceneDeletionFlags__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::EditorTools::SceneTracking::SceneTracking {
    IL2CPP_REGISTER_METHOD(0x01208410, float, GetArtProgressValue, (app::SceneTracking * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x01208450, void, SetArtProgressValue, (app::SceneTracking * this_ptr, int32_t id, float f))
    IL2CPP_REGISTER_METHOD(0x01208680, void, Reset, (app::SceneTracking * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01208960, void, UpdateTotalProgress, (app::SceneTracking * this_ptr, int32_t progress))
    IL2CPP_REGISTER_METHOD(0x01208970, void, UpdateArtProgress, (app::SceneTracking * this_ptr, int32_t new_art_progress))
    IL2CPP_REGISTER_METHOD(0x01208980, void, UpdateArtProgressValue, (app::SceneTracking * this_ptr, int32_t id, float value))
    IL2CPP_REGISTER_METHOD(0x01208AD0, void, UpdateArtPriority, (app::SceneTracking * this_ptr, int32_t priority))
    IL2CPP_REGISTER_METHOD(0x01208AE0, void, AddSceneDeletionFlag, (app::SceneTracking * this_ptr, app::SceneDeletionFlags__Enum new_flag))
    IL2CPP_REGISTER_METHOD(0x01208B00, void, RemoveSceneDeletionFlag, (app::SceneTracking * this_ptr, app::SceneDeletionFlags__Enum remove_flag))
    IL2CPP_REGISTER_METHOD(0x01208B20, void, UpdateKeyScene, (app::SceneTracking * this_ptr, bool is_key_scene))
    IL2CPP_REGISTER_METHOD(0x01208B30, void, UpdateComment, (app::SceneTracking * this_ptr, app::String* comments))
    IL2CPP_REGISTER_METHOD(0x01208B80, void, AddArea, (app::SceneTracking * this_ptr, int32_t area_id))
    IL2CPP_REGISTER_METHOD(0x01208D60, void, RemoveArea, (app::SceneTracking * this_ptr, int32_t area_id))
    IL2CPP_REGISTER_METHOD(0x01208F10, void, SetArea, (app::SceneTracking * this_ptr, int32_t area_id))
    IL2CPP_REGISTER_METHOD(0x012090F0, void, SetProductionState, (app::SceneTracking * this_ptr, bool new_state))
    IL2CPP_REGISTER_METHOD(0x01209100, void, UpdateHistory, (app::SceneTracking * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01209280, void, ctor, (app::SceneTracking * this_ptr))
} // namespace app::classes::Moon::EditorTools::SceneTracking::SceneTracking
