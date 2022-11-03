#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HoldableRigidBodyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00B5A730, void, FixedUpdate, (app::HoldableRigidBodyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5A900, void, OnDrawGizmos, (app::HoldableRigidBodyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5AA00, void, OnDrawGizmosSelected, (app::HoldableRigidBodyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5AB00, void, Serialize, (app::HoldableRigidBodyPlaceholder * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x004C8C00, void, ctor, (app::HoldableRigidBodyPlaceholder * this_ptr))
} // namespace app::classes::HoldableRigidBodyPlaceholder
