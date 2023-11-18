#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformMovementPortalVisitor.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PlatformMovementPortalVisitor {
    IL2CPP_REGISTER_METHOD(0x01171550, void, Awake, (app::PlatformMovementPortalVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01171620, void, OnDestroy, (app::PlatformMovementPortalVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01171700, void, set_Position, (app::PlatformMovementPortalVisitor * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x011717F0, app::Vector3, get_Position, (app::PlatformMovementPortalVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011718F0, void, set_Speed, (app::PlatformMovementPortalVisitor * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x011719E0, app::Vector3, get_Speed, (app::PlatformMovementPortalVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01171AD0, void, OnGoThroughPortal, (app::PlatformMovementPortalVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, (app::PlatformMovementPortalVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, (app::PlatformMovementPortalVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01171D70, void, ctor, (app::PlatformMovementPortalVisitor * this_ptr))
} // namespace app::classes::PlatformMovementPortalVisitor
