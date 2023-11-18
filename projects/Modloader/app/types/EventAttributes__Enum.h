#pragma once
#include <Modloader/app/structs/EventAttributes__Enum.h>
#include <Modloader/app/structs/EventAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventAttributes__Enum {
        inline app::EventAttributes__Enum__Class** type_info() {
            static app::EventAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventAttributes__Enum__Class>(type_info(), "System.Reflection", "EventAttributes");
        }
        inline app::EventAttributes__Enum* create() {
            return il2cpp::create_object<app::EventAttributes__Enum>(get_class());
        }
    } // namespace EventAttributes__Enum
} // namespace app::classes::types
