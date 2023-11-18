#pragma once
#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/FontStyle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FontStyle__Enum {
        inline app::FontStyle__Enum__Class** type_info() {
            static app::FontStyle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FontStyle__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FontStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::FontStyle__Enum__Class>(type_info(), "UnityEngine", "FontStyle");
        }
        inline app::FontStyle__Enum* create() {
            return il2cpp::create_object<app::FontStyle__Enum>(get_class());
        }
    } // namespace FontStyle__Enum
} // namespace app::classes::types
