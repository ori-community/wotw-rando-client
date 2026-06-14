#pragma once
#include <Modloader/app/structs/EventCommand__Enum.h>
#include <Modloader/app/structs/EventCommand__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventCommand__Enum {
        inline app::EventCommand__Enum__Class** type_info() {
            static app::EventCommand__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventCommand__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventCommand__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventCommand__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventCommand");
        }
        inline app::EventCommand__Enum* create() {
            return il2cpp::create_object<app::EventCommand__Enum>(get_class());
        }
    } // namespace EventCommand__Enum
} // namespace app::classes::types
