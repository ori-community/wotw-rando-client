#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_ActionMethod_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::ActionSequence {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsRunning, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsRunning, app::ActionSequence* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_Index, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_Index, app::ActionSequence* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5140, void, OnPoolSpawned, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5160, void, Awake, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5430, void, OnEnable, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C54D0, void, OnDisable, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5570, void, OnDestroy, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5840, void, OnGameReset, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5860, void, OnRestoreCheckpoint, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5930, void, FindActions, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5D30, void, Perform_1, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5D50, void, Perform_2, app::ActionSequence* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x004C5F00, void, RunAction, app::ActionSequence* this_ptr, app::ActionMethod* action)
    IL2CPP_REGISTER_METHOD(0x004C5FD0, void, OnUpdate, app::ActionSequence* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x004C5FE0, void, UpdateActions, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6200, void, Rename, app::List_1_ActionMethod_* actions)
    IL2CPP_REGISTER_METHOD(0x004C6480, app::String*, FormatName, int32_t number, app::String* name)
    IL2CPP_REGISTER_METHOD(0x004C6580, app::String*, UnformatName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x004C65B0, void, RefreshNames, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C65D0, app::String*, GetNiceName, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, app::ActionSequence* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004C6660, app::SuspendableMask__Enum, get_Mask, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6670, void, set_Mask, app::ActionSequence* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x004C6720, void, Stop, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsPerforming, app::ActionSequence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6730, void, Serialize, app::ActionSequence* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x004C6820, void, ctor, app::ActionSequence* this_ptr)
} // namespace app::classes::ActionSequence
