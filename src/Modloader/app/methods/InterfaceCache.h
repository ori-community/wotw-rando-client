#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ICameraFrustumSuspendable__Array.h>
#include <Modloader/app/structs/IDamageInterruptionBlockingTask__Array.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IDamageResolver.h>
#include <Modloader/app/structs/IEntityEventListener__Array.h>
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/IEntityOwned__Array.h>
#include <Modloader/app/structs/INavigationAgent.h>
#include <Modloader/app/structs/ITask__Array.h>
#include <Modloader/app/structs/IVitalsDeathListener__Array.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::InterfaceCache {
    IL2CPP_REGISTER_METHOD(0x0063D180, void, Dispose, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0154A180, void, Cache_1, app::InterfaceCache* this_ptr, app::GameObject* source)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_1, app::InterfaceCache* this_ptr, app::GameObject* source, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x01586130, app::Object__Array*, GetComponentsAs_1, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015EB730, app::Object*, GetComponentAs_1, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0154A180, void, Cache_2, app::InterfaceCache* this_ptr, app::GameObject* source)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IDamageReciever__Array*, GetComponentsAs_2, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_2, app::InterfaceCache* this_ptr, app::GameObject* source, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IDamageInterruptionBlockingTask__Array*, GetComponentsAs_3, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0154A180, void, Cache_3, app::InterfaceCache* this_ptr, app::GameObject* source)
    IL2CPP_REGISTER_METHOD(0x015EB730, app::IDamageResolver*, GetComponentAs_2, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_3, app::InterfaceCache* this_ptr, app::GameObject* source, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x01586130, app::ITask__Array*, GetComponentsAs_4, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_4, app::InterfaceCache* this_ptr, app::GameObject* source, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_5, app::InterfaceCache* this_ptr, app::GameObject* source, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_6, app::InterfaceCache* this_ptr, app::GameObject* source, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_7, app::InterfaceCache* this_ptr, app::GameObject* source, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x015EB730, app::INavigationAgent*, GetComponentAs_3, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IEntityEventListener__Array*, GetComponentsAs_5, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IEntityOwned__Array*, GetComponentsAs_6, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015EB730, app::IEntityLocomotion*, GetComponentAs_4, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0154A260, void, CacheFromChildren_8, app::InterfaceCache* this_ptr, app::GameObject* source, bool include_inactive)
    IL2CPP_REGISTER_METHOD(0x01586130, app::IVitalsDeathListener__Array*, GetComponentsAs_7, app::InterfaceCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01586130, app::ICameraFrustumSuspendable__Array*, GetComponentsAs_8, app::InterfaceCache* this_ptr)
} // namespace app::classes::InterfaceCache
