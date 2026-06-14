#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpdateSyncGuard__Boxed.h>

namespace app::classes::UpdateSyncGuard {
    IL2CPP_REGISTER_METHOD(0x001267E0, bool, OnFixedUpdate, app::UpdateSyncGuard__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001267F0, void, OnUpdate, app::UpdateSyncGuard__Boxed* this_ptr)
} // namespace app::classes::UpdateSyncGuard
