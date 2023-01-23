#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ColliderMask.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::ColliderMask {
    IL2CPP_REGISTER_METHOD(0x012CF6E0, void, OnEnable, (app::ColliderMask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CF880, void, OnDisable, (app::ColliderMask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CFA20, void, OnPostRestoreCheckpoint, (app::ColliderMask * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047908D8, ColliderMask_OnPostRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012CFB30, void, OnTriggerEnter, (app::ColliderMask * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x012CFC30, void, OnTriggerExit, (app::ColliderMask * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x012CFD30, bool, ValidLayer, (app::ColliderMask * this_ptr, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x012CFD50, void, SetIgnoreCollision, (app::ColliderMask * this_ptr, app::Collider* intersecting, bool should_ignore))
    IL2CPP_REGISTER_METHOD(0x012CFFB0, void, ctor, (app::ColliderMask * this_ptr))
} // namespace app::classes::ColliderMask
