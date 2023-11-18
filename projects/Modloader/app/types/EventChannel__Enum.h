#pragma once
#include <Modloader/app/structs/EventChannel__Enum.h>
#include <Modloader/app/structs/EventChannel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventChannel__Enum {
        inline app::EventChannel__Enum__Class** type_info() {
            static app::EventChannel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventChannel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventChannel__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventChannel__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventChannel");
        }
        inline app::EventChannel__Enum* create() {
            return il2cpp::create_object<app::EventChannel__Enum>(get_class());
        }
    } // namespace EventChannel__Enum
} // namespace app::classes::types
