#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/KeepSceneLoadedEntity.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>

namespace app::classes::Moon::Timeline::KeepSceneLoadedEntity {
    IL2CPP_REGISTER_METHOD(0x00417920, app::UpdateCategory__Enum, get_UpdateCategory, app::KeepSceneLoadedEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00771CC0, void, OnStartPlayback, app::KeepSceneLoadedEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007721E0, void, OnUpdateEntity, app::KeepSceneLoadedEntity* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x007725D0, void, OnLoadedScene_1, app::KeepSceneLoadedEntity* this_ptr, bool success)
    IL2CPP_REGISTER_METHOD(0x007725F0, void, OnLoadedScene_2, app::KeepSceneLoadedEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007726D0, void, OnStopPlayback, app::KeepSceneLoadedEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, app::KeepSceneLoadedEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, app::KeepSceneLoadedEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007729F0, void, ctor, app::KeepSceneLoadedEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::KeepSceneLoadedEntity
