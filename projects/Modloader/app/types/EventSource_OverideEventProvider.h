#pragma once
#include <Modloader/app/structs/EventSource_OverideEventProvider.h>
#include <Modloader/app/structs/EventSource_OverideEventProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSource_OverideEventProvider {
        inline app::EventSource_OverideEventProvider__Class** type_info() {
            static app::EventSource_OverideEventProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventSource_OverideEventProvider__Class**)(modloader::win::memory::resolve_rva(0x04713E70));
            }
            return cache;
        }
        inline app::EventSource_OverideEventProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::EventSource_OverideEventProvider__Class>(type_info(), "System.Diagnostics.Tracing", "EventSource", "OverideEventProvider");
        }
        inline app::EventSource_OverideEventProvider* create() {
            return il2cpp::create_object<app::EventSource_OverideEventProvider>(get_class());
        }
    } // namespace EventSource_OverideEventProvider
} // namespace app::classes::types
