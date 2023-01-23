#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IRecordable.h>
#include <Modloader/app/structs/RecorderIdUtility.h>

namespace app::classes::RecorderIdUtility {
    IL2CPP_REGISTER_METHOD(0x008F0F70, app::String*, GetAssetGuid, (app::Object_1 * asset))
    IL2CPP_REGISTER_METHOD(0x008F0FF0, app::String*, GetPath, (app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x008F1290, int32_t, GetChildIndex, (app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x008F14F0, int64_t, GetFileId_1, (app::Component_1 * instance, app::GameObject* instance_root, app::GameObject* prefab_root))
    IL2CPP_REGISTER_METHOD(0x008F15D0, int64_t, GetFileId_2, (app::IRecordable * recordable_instance, app::GameObject* instance_root, app::GameObject* prefab_root))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, GetObjectLocalIdInFile, (app::Object_1 * unity_obj))
    IL2CPP_REGISTER_METHOD(0x008F16D0, int64_t, SearchForChildRecordableFileId_1, (app::IRecordable * recordable, app::Transform* instance_current, app::Transform* prefab_current))
    IL2CPP_REGISTER_METHOD(0x008F1710, int64_t, SearchForChildRecordableFileId_2, (app::Component_1 * recordable, app::Transform* instance_current, app::Transform* prefab_current))
    IL2CPP_REGISTER_METHOD(0x008F19E0, int64_t, MergeIds, (int64_t id_a, int64_t id_b))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RecorderIdUtility * this_ptr))
} // namespace app::classes::RecorderIdUtility
