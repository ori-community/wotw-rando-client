#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TreeBehaviour.h>
#include <Modloader/app/structs/IMoonType_1_System_Boolean_.h>
#include <Modloader/app/structs/IMoonType_1_System_Int32_.h>
#include <Modloader/app/structs/IMoonType_1_System_Object_.h>
#include <Modloader/app/structs/IMoonType_1_System_Single_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::TreeBehaviour {
    IL2CPP_REGISTER_METHOD(0x030120C0, void, OnValidate, (app::TreeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0217ACC0, app::String*, get_Info, (app::TreeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03012130, bool, get_IsDisabled, (app::TreeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_IsDisabled, (app::TreeBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x030121B0, bool, get_IsEnabled, (app::TreeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030121C0, void, set_IsEnabled, (app::TreeBehaviour * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PerformSanityCheck, (app::TreeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::TreeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::TreeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, (app::TreeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0153EFF0, app::String*, EditorResolveToString_1, (app::IMoonType_1_System_Object_ * moon_type))
    IL2CPP_REGISTER_METHOD(0x0153EA00, app::String*, EditorResolveToString_2, (app::IMoonType_1_System_Boolean_ * moon_type))
    IL2CPP_REGISTER_METHOD(0x0153F570, app::String*, EditorResolveToString_3, (app::IMoonType_1_UnityEngine_Vector3_ * moon_type))
    IL2CPP_REGISTER_METHOD(0x0153F290, app::String*, EditorResolveToString_4, (app::IMoonType_1_System_Single_ * moon_type))
    IL2CPP_REGISTER_METHOD(0x0153ECF0, app::String*, EditorResolveToString_5, (app::IMoonType_1_System_Int32_ * moon_type))
    IL2CPP_REGISTER_METHOD(0x0153EFF0, app::String*, EditorResolveToString_6, (app::IMoonType_1_UnityEngine_GameObject_ * moon_type))
} // namespace app::classes::Moon::BehaviourSystem::TreeBehaviour
