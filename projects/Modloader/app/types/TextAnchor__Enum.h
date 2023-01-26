#pragma once
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/TextAnchor__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextAnchor__Enum {
        inline app::TextAnchor__Enum__Class** type_info() {
            static app::TextAnchor__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextAnchor__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextAnchor__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextAnchor__Enum__Class>(type_info(), "UnityEngine", "TextAnchor");
        }
        inline app::TextAnchor__Enum* create() {
            return il2cpp::create_object<app::TextAnchor__Enum>(get_class());
        }
    } // namespace TextAnchor__Enum
} // namespace app::classes::types
