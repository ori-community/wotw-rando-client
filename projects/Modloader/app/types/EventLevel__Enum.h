#pragma once
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventLevel__Enum {
        inline app::EventLevel__Enum__Class** type_info() {
            static app::EventLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x047027D0));
            }
            return cache;
        }
        inline app::EventLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventLevel__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventLevel");
        }
        inline app::EventLevel__Enum* create() {
            return il2cpp::create_object<app::EventLevel__Enum>(get_class());
        }
    } // namespace EventLevel__Enum
} // namespace app::classes::types
