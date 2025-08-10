#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XalBrowserWrapper.h>

namespace app::classes::SystemIntegration::XalBrowserWrapper {
    IL2CPP_REGISTER_METHOD(0x00CDB300, void, ctor, app::XalBrowserWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDB4F0, bool, SetupBrowserInstance, app::XalBrowserWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDB920, void, Cleanup, app::XalBrowserWrapper* this_ptr, bool was_cancel)
    IL2CPP_REGISTER_METHOD(0x00CDBA10, void, Cancel, app::XalBrowserWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00CDBAE0,
        void,
        __ctor_b__8_0,
        app::XalBrowserWrapper* this_ptr,
        void* operation_id,
        app::String* start_url,
        app::String* final_url,
        bool suppress_ui
    )
    IL2CPP_REGISTER_METHOD(0x00CDBCE0, void, __ctor_b__8_1, app::XalBrowserWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDBD10, void, _SetupBrowserInstance_b__9_0, app::XalBrowserWrapper* this_ptr)
} // namespace app::classes::SystemIntegration::XalBrowserWrapper
