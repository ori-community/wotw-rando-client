#pragma once
#include <Modloader/app/structs/TextClipping__Enum.h>
#include <Modloader/app/structs/TextClipping__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextClipping__Enum {
        inline app::TextClipping__Enum__Class** type_info() {
            static app::TextClipping__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextClipping__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextClipping__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextClipping__Enum__Class>(type_info(), "UnityEngine", "TextClipping");
        }
        inline app::TextClipping__Enum* create() {
            return il2cpp::create_object<app::TextClipping__Enum>(get_class());
        }
    } // namespace TextClipping__Enum
} // namespace app::classes::types
