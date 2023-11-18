#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugMeshBounds.h>

namespace app::classes::DebugMeshBounds {
    IL2CPP_REGISTER_METHOD(0x00DF8860, void, OnEnable, (app::DebugMeshBounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DF89C0, void, Update, (app::DebugMeshBounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DF9370, void, OnDrawGizmos, (app::DebugMeshBounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DebugMeshBounds * this_ptr))
} // namespace app::classes::DebugMeshBounds
