#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISuspendable.h>
#include <Modloader/app/structs/SuspensionManager_SuspendableInfo.h>

namespace app::classes::Moon::SuspensionManager_SuspendableInfo {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Counter, app::SuspensionManager_SuspendableInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031AF650, void, SuspendObj, app::SuspensionManager_SuspendableInfo* this_ptr, app::ISuspendable* suspendable)
    IL2CPP_REGISTER_METHOD(0x031AF740, void, ResumeObj, app::SuspensionManager_SuspendableInfo* this_ptr, app::ISuspendable* suspendable)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SuspensionManager_SuspendableInfo* this_ptr)
} // namespace app::classes::Moon::SuspensionManager_SuspendableInfo
