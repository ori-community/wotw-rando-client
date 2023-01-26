#pragma once
#include <Modloader/app/structs/EventProvider_EventData.h>
#include <Modloader/app/structs/EventProvider_EventData__Boxed.h>
#include <Modloader/app/structs/EventProvider_EventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventProvider_EventData {
        inline app::EventProvider_EventData__Class** type_info() {
            static app::EventProvider_EventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventProvider_EventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventProvider_EventData__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_EventData__Class>(type_info(), "System.Diagnostics.Tracing", "EventProvider", "EventData");
        }
        inline app::EventProvider_EventData* create() {
            return il2cpp::create_object<app::EventProvider_EventData>(get_class());
        }
        inline app::EventProvider_EventData__Boxed* box(app::EventProvider_EventData value) {
            return il2cpp::box_value<app::EventProvider_EventData__Boxed>(get_class(), value);
        }
    } // namespace EventProvider_EventData
} // namespace app::classes::types
