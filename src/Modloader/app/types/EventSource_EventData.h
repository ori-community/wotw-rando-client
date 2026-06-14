#pragma once
#include <Modloader/app/structs/EventSource_EventData.h>
#include <Modloader/app/structs/EventSource_EventData__Boxed.h>
#include <Modloader/app/structs/EventSource_EventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSource_EventData {
        inline app::EventSource_EventData__Class** type_info() {
            static app::EventSource_EventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventSource_EventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventSource_EventData__Class* get_class() {
            return il2cpp::get_nested_class<app::EventSource_EventData__Class>(type_info(), "System.Diagnostics.Tracing", "EventSource", "EventData");
        }
        inline app::EventSource_EventData* create() {
            return il2cpp::create_object<app::EventSource_EventData>(get_class());
        }
        inline app::EventSource_EventData__Boxed* box(app::EventSource_EventData value) {
            return il2cpp::box_value<app::EventSource_EventData__Boxed>(get_class(), value);
        }
    } // namespace EventSource_EventData
} // namespace app::classes::types
