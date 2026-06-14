#pragma once
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventKeywords__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventKeywords__Enum {
        inline app::EventKeywords__Enum__Class** type_info() {
            static app::EventKeywords__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventKeywords__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventKeywords__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventKeywords__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventKeywords");
        }
        inline app::EventKeywords__Enum* create() {
            return il2cpp::create_object<app::EventKeywords__Enum>(get_class());
        }
    } // namespace EventKeywords__Enum
} // namespace app::classes::types
