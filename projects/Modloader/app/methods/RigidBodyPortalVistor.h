#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RigidBodyPortalVistor {
    IL2CPP_REGISTER_METHOD(0x00911BE0, void, Awake, (app::RigidBodyPortalVistor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911C70, void, OnEnable, (app::RigidBodyPortalVistor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911D30, void, OnDisable, (app::RigidBodyPortalVistor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911E10, void, set_Position, (app::RigidBodyPortalVistor * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00911E90, app::Vector3, get_Position, (app::RigidBodyPortalVistor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911F20, app::Vector3, get_Speed, (app::RigidBodyPortalVistor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00911FB0, void, set_Speed, (app::RigidBodyPortalVistor * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGoThroughPortal, (app::RigidBodyPortalVistor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, (app::RigidBodyPortalVistor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, (app::RigidBodyPortalVistor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RigidBodyPortalVistor * this_ptr))
} // namespace app::classes::RigidBodyPortalVistor
