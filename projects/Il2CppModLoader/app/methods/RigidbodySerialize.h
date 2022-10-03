#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RigidbodySerialize {
    IL2CPP_REGISTER_METHOD(0x01351520, void, OnPoolSpawned, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013515F0, void, Initialize, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013516B0, void, Awake, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01351790, void, OnDestroy, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01351830, void, set_IsSuspended, (app::RigidbodySerialize * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608710, app::SuspendableMask__Enum, get_Mask, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608720, void, set_Mask, (app::RigidbodySerialize * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01351850, void, Serialize, (app::RigidbodySerialize * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x01352110, void, Suspend, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01352460, void, Resume, (app::RigidbodySerialize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01352610, void, ctor, (app::RigidbodySerialize * this_ptr))
} // namespace app::classes::RigidbodySerialize
