#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IExplicitUpdateHandlerBase.h>
#include <Modloader/app/structs/IMoonDriverExecutionOrderMap.h>
#include <Modloader/app/structs/IUpdateHandler.h>
#include <Modloader/app/structs/IUpdateHandlerBase.h>
#include <Modloader/app/structs/IUpdateHandlerWithExecutionOrderOffset.h>
#include <Modloader/app/structs/MoonDriver.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/UpdateManager.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::MoonDriver {
    IL2CPP_REGISTER_METHOD(0x0313ADF0, void, RuntimeInitializeOnLoad, )
    IL2CPP_REGISTER_METHOD(0x0313AE80, app::MoonDriver*, GetInstance, )
    IL2CPP_REGISTER_METHOD(0x0313B180, void, SetCustomExecutionOrderMap, app::IMoonDriverExecutionOrderMap* map)
    IL2CPP_REGISTER_METHOD(0x0313B230, void, Register_1, app::IUpdateHandler* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313B2E0, void, Register_2, app::IUpdateHandlerWithExecutionOrderOffset* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313B4D0, void, Register_3, app::IExplicitUpdateHandlerBase* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313B580, void, Unregister_1, app::IUpdateHandler* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313B630, void, Unregister_2, app::IExplicitUpdateHandlerBase* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313B6E0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetCustomExecutionOrderMapInternal, app::MoonDriver* this_ptr, app::IMoonDriverExecutionOrderMap* map)
    IL2CPP_REGISTER_METHOD(0x0313B870, int32_t, GetExecutionOrderInMapInternal, app::MoonDriver* this_ptr, app::IUpdateHandlerBase* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313B9C0, void, RegisterInternal_1, app::MoonDriver* this_ptr, app::IUpdateHandler* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313BB10, void, RegisterInternal_2, app::MoonDriver* this_ptr, app::IUpdateHandlerWithExecutionOrderOffset* update_handle)
    IL2CPP_REGISTER_METHOD(0x0313BC70, void, RegisterInternal_3, app::MoonDriver* this_ptr, app::IExplicitUpdateHandlerBase* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313BE50, void, UnregisterInternal_1, app::MoonDriver* this_ptr, app::IUpdateHandler* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313BF80, void, UnregisterInternal_2, app::MoonDriver* this_ptr, app::IExplicitUpdateHandlerBase* update_handler)
    IL2CPP_REGISTER_METHOD(0x0313C110, void, OnDestroy, app::MoonDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313C1B0, void, Initialize, app::MoonDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313C330, app::UpdateManager*, CreateManager, app::MoonDriver* this_ptr, app::UpdateType__Enum update_type)
    IL2CPP_REGISTER_METHOD(0x0313C4F0, void, EnableProfiling, app::MoonDriver* this_ptr, bool enable)
    IL2CPP_REGISTER_METHOD(0x0313C530, void, DumpEntries, app::MoonDriver* this_ptr, app::StreamWriter* sw)
    IL2CPP_REGISTER_METHOD(
        0x0313C650,
        void,
        GetEntryCounts,
        app::MoonDriver* this_ptr,
        int32_t* update_manager_count,
        int32_t* fixed_update_manager_count,
        int32_t* late_update_manager_count
    )
    IL2CPP_REGISTER_METHOD(0x0313C6D0, void, Update, app::MoonDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313C740, void, LateUpdate, app::MoonDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313C7B0, void, FixedUpdate, app::MoonDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313C820, void, TimelineUpdate, app::MoonDriver* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0313C890, void, ctor, app::MoonDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0313CA70, void, cctor, )
} // namespace app::classes::Moon::MoonDriver
