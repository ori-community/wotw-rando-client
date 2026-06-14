#pragma once
#include <Modloader/app/structs/EventFieldTags__Enum.h>
#include <Modloader/app/structs/EventFieldTags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventFieldTags__Enum {
        inline app::EventFieldTags__Enum__Class** type_info() {
            static app::EventFieldTags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventFieldTags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventFieldTags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventFieldTags__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventFieldTags");
        }
        inline app::EventFieldTags__Enum* create() {
            return il2cpp::create_object<app::EventFieldTags__Enum>(get_class());
        }
    } // namespace EventFieldTags__Enum
} // namespace app::classes::types
