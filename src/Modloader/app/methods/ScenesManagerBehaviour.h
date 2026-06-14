#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SceneManagerScene_.h>
#include <Modloader/app/structs/List_1_SceneOperation_.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneLoadingQueue.h>
#include <Modloader/app/structs/ScenesManager.h>
#include <Modloader/app/structs/ScenesManagerBehaviour.h>
#include <Modloader/app/structs/ScenesManagerContext.h>
#include <Modloader/app/structs/ScenesManagerSettings.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ScenesManagerBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::List_1_SceneOperation_*, get_SceneOperationsEnable, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::List_1_SceneOperation_*, get_SceneOperationsLoad, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::List_1_SceneOperation_*, get_SceneOperationsUnload, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052D80, app::Vector2, get_CurrentCameraTargetPosition, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052DC0, app::SceneLoadingQueue*, get_Queue, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::ScenesManager*, get_Manager, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ScenesManagerContext*, get_Context, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052E10, app::List_1_SceneManagerScene_*, get_ActiveScenes, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052E40, app::ScenesManagerSettings*, get_Settings, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, Initialize, app::ScenesManagerBehaviour* this_ptr, app::ScenesManagerContext* context)
    IL2CPP_REGISTER_METHOD(0x01052E70, bool, CanUnload, app::ScenesManagerBehaviour* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x01052EA0, bool, CanDisable, app::ScenesManagerBehaviour* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052ED0, void, UpdatePosition, app::ScenesManagerBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01053140, void, SetTargetPosition, app::ScenesManagerBehaviour* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x010531F0, void, ctor, app::ScenesManagerBehaviour* this_ptr)
} // namespace app::classes::ScenesManagerBehaviour
