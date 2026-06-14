#pragma once
#include <Modloader/app/structs/TextAlignment__Enum.h>
#include <Modloader/app/structs/TextAlignment__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextAlignment__Enum {
        inline app::TextAlignment__Enum__Class** type_info() {
            static app::TextAlignment__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextAlignment__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextAlignment__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextAlignment__Enum__Class>(type_info(), "UnityEngine", "TextAlignment");
        }
        inline app::TextAlignment__Enum* create() {
            return il2cpp::create_object<app::TextAlignment__Enum>(get_class());
        }
    } // namespace TextAlignment__Enum
} // namespace app::classes::types
