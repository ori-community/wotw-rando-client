#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IDamageInterruptionBlockingTask__Array.h>
#include <Modloader/app/structs/IDamageResolver.h>
#include <Modloader/app/structs/ITask__Array.h>
#include <Modloader/app/structs/INavigationAgent.h>
#include <Modloader/app/structs/IEntityEventListener__Array.h>
#include <Modloader/app/structs/IEntityOwned__Array.h>
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/IVitalsDeathListener__Array.h>
#include <Modloader/app/structs/ICameraFrustumSuspendable__Array.h>

namespace app::classes::InterfaceCache {
    IL2CPP_REGISTER_METHOD(0x0063D180, void, Dispose, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0154A180, void, Cache_1, (app::InterfaceCache * this_ptr, app::GameObject* source))
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_1, (app::InterfaceCache * this_ptr, app::GameObject* source, bool include_inactive))
    IL2CPP_REGISTER_METHOD(0x01586130, app::Object__Array*, GetComponentsAs_1, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015EB730, app::Object*, GetComponentAs_1, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0154A180, void, Cache_2, (app::InterfaceCache * this_ptr, app::GameObject* source))
    IL2CPP_REGISTER_METHODINFO(0x0476A1F0, InterfaceCache_Cache_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IDamageReciever__Array*, GetComponentsAs_2, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758698, InterfaceCache_GetComponentsAs_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_2, (app::InterfaceCache * this_ptr, app::GameObject* source, bool include_inactive))
    IL2CPP_REGISTER_METHODINFO(0x0478B8C8, InterfaceCache_CacheFromChildren_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IDamageInterruptionBlockingTask__Array*, GetComponentsAs_3, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E168, InterfaceCache_GetComponentsAs_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A180, void, Cache_3, (app::InterfaceCache * this_ptr, app::GameObject* source))
    IL2CPP_REGISTER_METHODINFO(0x0477C460, InterfaceCache_Cache_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB730, app::IDamageResolver*, GetComponentAs_2, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478CEF8, InterfaceCache_GetComponentAs_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_3, (app::InterfaceCache * this_ptr, app::GameObject* source, bool include_inactive))
    IL2CPP_REGISTER_METHODINFO(0x047570A0, InterfaceCache_CacheFromChildren_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586130, app::ITask__Array*, GetComponentsAs_4, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729080, InterfaceCache_GetComponentsAs_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_4, (app::InterfaceCache * this_ptr, app::GameObject* source, bool include_inactive))
    IL2CPP_REGISTER_METHODINFO(0x047176A8, InterfaceCache_CacheFromChildren_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_5, (app::InterfaceCache * this_ptr, app::GameObject* source, bool include_inactive))
    IL2CPP_REGISTER_METHODINFO(0x0478A8B8, InterfaceCache_CacheFromChildren_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_6, (app::InterfaceCache * this_ptr, app::GameObject* source, bool include_inactive))
    IL2CPP_REGISTER_METHODINFO(0x04745BD8, InterfaceCache_CacheFromChildren_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_7, (app::InterfaceCache * this_ptr, app::GameObject* source, bool include_inactive))
    IL2CPP_REGISTER_METHODINFO(0x04787A38, InterfaceCache_CacheFromChildren_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB730, app::INavigationAgent*, GetComponentAs_3, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732A60, InterfaceCache_GetComponentAs_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IEntityEventListener__Array*, GetComponentsAs_5, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723D28, InterfaceCache_GetComponentsAs_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IEntityOwned__Array*, GetComponentsAs_6, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D4D8, InterfaceCache_GetComponentsAs_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EB730, app::IEntityLocomotion*, GetComponentAs_4, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E148, InterfaceCache_GetComponentAs_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_8, (app::InterfaceCache * this_ptr, app::GameObject* source, bool include_inactive))
    IL2CPP_REGISTER_METHODINFO(0x04793D80, InterfaceCache_CacheFromChildren_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IVitalsDeathListener__Array*, GetComponentsAs_7, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707A10, InterfaceCache_GetComponentsAs_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586130, app::ICameraFrustumSuspendable__Array*, GetComponentsAs_8, (app::InterfaceCache * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472BFF8, InterfaceCache_GetComponentsAs_7__MethodInfo)
} // namespace app::classes::InterfaceCache
