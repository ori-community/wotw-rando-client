#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventSource_EventDataPtr__Class.h>
#include <Modloader/app/structs/EventSource_EventDataPtr.h>

namespace app::classes::types {
    namespace EventSource_EventDataPtr {
        namespace {
            inline app::EventSource_EventDataPtr__Class* type_info_ref = nullptr;
        }
        inline app::EventSource_EventDataPtr__Class** type_info = &type_info_ref;
        inline app::EventSource_EventDataPtr__Class* get_class() {
            return il2cpp::get_class<app::EventSource_EventDataPtr__Class>(type_info, "System.Diagnostics.Tracing", "EventSource+EventData*");
        }
        inline app::EventSource_EventDataPtr* create() {
            return il2cpp::create_object<app::EventSource_EventDataPtr>(get_class());
        }
    } // namespace EventSource_EventDataPtr
} // namespace app::classes::types
