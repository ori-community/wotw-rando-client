#pragma once
#include <Modloader/app/structs/GUIText.h>
#include <Modloader/app/structs/GUIText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIText {
        inline app::GUIText__Class** type_info() {
            static app::GUIText__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIText__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIText__Class* get_class() {
            return il2cpp::get_class<app::GUIText__Class>(type_info(), "UnityEngine", "GUIText");
        }
        inline app::GUIText* create() {
            return il2cpp::create_object<app::GUIText>(get_class());
        }
    } // namespace GUIText
} // namespace app::classes::types
