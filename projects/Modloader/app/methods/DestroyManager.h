#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DestroyManager.h>
#include <Modloader/app/structs/List_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/DestroyManager_CountAndCallback.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/List_1_DestroyManager_CountAndCallback_.h>

namespace app::classes::DestroyManager {
    IL2CPP_REGISTER_METHOD(0x00B8A5C0, void, ctor, (app::DestroyManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8AC80, void, DestroyResourcesAsync, (app::DestroyManager * this_ptr, app::List_1_UnityEngine_Object_* resources, app::Action* callback))
    IL2CPP_REGISTER_METHOD(0x00B8AEC0, void, AddResourceCountAndCallback, (app::DestroyManager * this_ptr, int32_t count, app::Action* callback))
    IL2CPP_REGISTER_METHOD(0x00B8AF80, void, AddTransformCountAndCallback, (app::DestroyManager * this_ptr, int32_t count, app::Action* callback))
    IL2CPP_REGISTER_METHOD(0x00B8B040, app::DestroyManager_CountAndCallback*, GetAvailableCountAndCallback, (app::DestroyManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8B1F0, void, DestroyGameObjectAsync, (app::DestroyManager * this_ptr, app::GameObject* target, app::Action* callback))
    IL2CPP_REGISTER_METHOD(0x00B8B450, void, UnloadResourcesAsync, (app::DestroyManager * this_ptr, app::List_1_UnityEngine_Object_* runtime_resources))
    IL2CPP_REGISTER_METHOD(0x00B8B530, void, AddTransform, (app::DestroyManager * this_ptr, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x00B8B690, bool, get_IsDestroying, (app::DestroyManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8B720, void, DestroyAll, (app::DestroyManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8B9F0, void, Update, (app::DestroyManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8BD30, void, ProcessActiveCountAndCallbacks, (app::DestroyManager * this_ptr, app::List_1_DestroyManager_CountAndCallback_* active_list))
} // namespace app::classes::DestroyManager
