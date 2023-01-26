#pragma once
#include <Modloader/app/structs/EventTask__Enum.h>
#include <Modloader/app/structs/EventTask__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTask__Enum {
        inline app::EventTask__Enum__Class** type_info() {
            static app::EventTask__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTask__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTask__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventTask__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventTask");
        }
        inline app::EventTask__Enum* create() {
            return il2cpp::create_object<app::EventTask__Enum>(get_class());
        }
    } // namespace EventTask__Enum
} // namespace app::classes::types
