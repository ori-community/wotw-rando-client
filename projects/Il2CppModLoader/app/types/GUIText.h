#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIText {
        namespace {
            inline app::GUIText__Class* type_info_ref = nullptr;
        }
        inline app::GUIText__Class** type_info = &type_info_ref;
        inline app::GUIText__Class* get_class() {
            return il2cpp::get_class<app::GUIText__Class>(type_info, "UnityEngine", "GUIText");
        }
        inline app::GUIText* create() {
            return il2cpp::create_object<app::GUIText>(get_class());
        }
    } // namespace GUIText
} // namespace app::classes::types
