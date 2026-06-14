#pragma once
#include <Modloader/app/structs/EventTags__Enum.h>
#include <Modloader/app/structs/EventTags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTags__Enum {
        inline app::EventTags__Enum__Class** type_info() {
            static app::EventTags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventTags__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventTags");
        }
        inline app::EventTags__Enum* create() {
            return il2cpp::create_object<app::EventTags__Enum>(get_class());
        }
    } // namespace EventTags__Enum
} // namespace app::classes::types
