#pragma once
#include <Modloader/app/structs/EventProvider_EventDataPtr.h>
#include <Modloader/app/structs/EventProvider_EventDataPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventProvider_EventDataPtr {
        inline app::EventProvider_EventDataPtr__Class** type_info() {
            static app::EventProvider_EventDataPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventProvider_EventDataPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventProvider_EventDataPtr__Class* get_class() {
            return il2cpp::get_class<app::EventProvider_EventDataPtr__Class>(type_info(), "System.Diagnostics.Tracing", "EventProvider+EventData*");
        }
        inline app::EventProvider_EventDataPtr* create() {
            return il2cpp::create_object<app::EventProvider_EventDataPtr>(get_class());
        }
    } // namespace EventProvider_EventDataPtr
} // namespace app::classes::types
