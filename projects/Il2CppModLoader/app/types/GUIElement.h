#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIElement {
        namespace {
            inline app::GUIElement__Class* type_info_ref = nullptr;
        }
        inline app::GUIElement__Class** type_info = &type_info_ref;
        inline app::GUIElement__Class* get_class() {
            return il2cpp::get_class<app::GUIElement__Class>(type_info, "UnityEngine", "GUIElement");
        }
        inline app::GUIElement* create() {
            return il2cpp::create_object<app::GUIElement>(get_class());
        }
    } // namespace GUIElement
} // namespace app::classes::types
