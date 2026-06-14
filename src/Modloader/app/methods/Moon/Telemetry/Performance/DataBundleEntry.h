#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataBundleEntry.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Telemetry::Performance::DataBundleEntry {
    IL2CPP_REGISTER_METHOD(0x00E33B50, void, ctor, app::DataBundleEntry* this_ptr, app::String* path)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Path, app::DataBundleEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, app::DataBundleEntry* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, app::DataBundleEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Name, app::DataBundleEntry* this_ptr, app::String* value)
} // namespace app::classes::Moon::Telemetry::Performance::DataBundleEntry
