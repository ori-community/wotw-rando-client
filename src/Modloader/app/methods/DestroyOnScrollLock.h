#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DestroyOnScrollLock.h>

namespace app::classes::DestroyOnScrollLock {
    IL2CPP_REGISTER_METHOD(0x00B8CF40, void, Awake, app::DestroyOnScrollLock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8D0E0, void, OnDestroy, app::DestroyOnScrollLock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8D280, void, OnScrollLockPassed, app::DestroyOnScrollLock* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DestroyOnScrollLock* this_ptr)
} // namespace app::classes::DestroyOnScrollLock
