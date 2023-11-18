#pragma once
#include <Modloader/app/structs/GUIElement.h>
#include <Modloader/app/structs/GUIElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIElement {
        inline app::GUIElement__Class** type_info() {
            static app::GUIElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIElement__Class* get_class() {
            return il2cpp::get_class<app::GUIElement__Class>(type_info(), "UnityEngine", "GUIElement");
        }
        inline app::GUIElement* create() {
            return il2cpp::create_object<app::GUIElement>(get_class());
        }
    } // namespace GUIElement
} // namespace app::classes::types
