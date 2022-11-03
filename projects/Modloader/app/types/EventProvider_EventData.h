#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventProvider_EventData {
        namespace {
            inline app::EventProvider_EventData__Class* type_info_ref = nullptr;
        }
        inline app::EventProvider_EventData__Class** type_info = &type_info_ref;
        inline app::EventProvider_EventData__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_EventData__Class>(type_info, "System.Diagnostics.Tracing", "EventProvider", "EventData");
        }
        inline app::EventProvider_EventData* create() {
            return il2cpp::create_object<app::EventProvider_EventData>(get_class());
        }
        inline app::EventProvider_EventData__Boxed* box(app::EventProvider_EventData value) {
            return il2cpp::box_value<app::EventProvider_EventData__Boxed>(get_class(), value);
        }
    } // namespace EventProvider_EventData
} // namespace app::classes::types
