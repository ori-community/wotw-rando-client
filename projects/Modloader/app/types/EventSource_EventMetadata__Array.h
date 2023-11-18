#pragma once
#include <Modloader/app/structs/EventSource_EventMetadata__Array.h>
#include <Modloader/app/structs/EventSource_EventMetadata__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSource_EventMetadata__Array {
        inline app::EventSource_EventMetadata__Array__Class** type_info() {
            static app::EventSource_EventMetadata__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventSource_EventMetadata__Array__Class**)(modloader::win::memory::resolve_rva(0x0476BF40));
            }
            return cache;
        }
        inline app::EventSource_EventMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::EventSource_EventMetadata__Array__Class>(type_info(), "System.Diagnostics.Tracing", "EventSource+EventMetadata[]");
        }
        inline app::EventSource_EventMetadata__Array* create() {
            return il2cpp::create_object<app::EventSource_EventMetadata__Array>(get_class());
        }
    } // namespace EventSource_EventMetadata__Array
} // namespace app::classes::types
