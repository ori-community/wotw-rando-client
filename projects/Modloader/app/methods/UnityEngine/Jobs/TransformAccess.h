#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/TransformAccess__Boxed.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/TransformAccess.h>

namespace app::classes::UnityEngine::Jobs::TransformAccess {
    IL2CPP_REGISTER_METHOD(0x001F2360, app::Vector3, get_position, (app::TransformAccess__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F23F0, void, set_position, (app::TransformAccess__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001F2460, app::Quaternion, get_rotation, (app::TransformAccess__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F24E0, void, set_rotation, (app::TransformAccess__Boxed * this_ptr, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x001F2540, app::Vector3, get_localScale, (app::TransformAccess__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F25D0, void, set_localScale, (app::TransformAccess__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001F2640, app::Vector3, get_up, (app::TransformAccess__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252DD40, void, GetPosition, (app::TransformAccess * access, app::Vector3* p))
    IL2CPP_REGISTER_METHOD(0x0252DDA0, void, SetPosition, (app::TransformAccess * access, app::Vector3* p))
    IL2CPP_REGISTER_METHOD(0x0252DE00, void, GetRotation, (app::TransformAccess * access, app::Quaternion* r))
    IL2CPP_REGISTER_METHOD(0x0252DE60, void, SetRotation, (app::TransformAccess * access, app::Quaternion* r))
    IL2CPP_REGISTER_METHOD(0x0252DEC0, void, GetLocalScale, (app::TransformAccess * access, app::Vector3* s))
    IL2CPP_REGISTER_METHOD(0x0252DF20, void, SetLocalScale, (app::TransformAccess * access, app::Vector3* s))
    IL2CPP_REGISTER_METHOD(0x001F2670, app::Vector3, TransformPoint, (app::TransformAccess__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x001F2710, void, SetPositionAndRotation, (app::TransformAccess__Boxed * this_ptr, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x0252DF80, void, TransformPoint_Injected, (app::TransformAccess * _unity_self, app::Vector3* point, app::Vector3* ret))
    IL2CPP_REGISTER_METHOD(0x0252DFF0, void, SetPositionAndRotation_Injected, (app::TransformAccess * _unity_self, app::Vector3* position, app::Quaternion* rotation))
} // namespace app::classes::UnityEngine::Jobs::TransformAccess
