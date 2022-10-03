#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayer {
        namespace {
            app::GUILayer__Class* type_info_ref = nullptr;
        }
        app::GUILayer__Class** type_info = &type_info_ref;
        inline app::GUILayer__Class* get_class() {
            return il2cpp::get_class<app::GUILayer__Class>(type_info, "UnityEngine", "GUILayer");
        }
        inline app::GUILayer* create() {
            return il2cpp::create_object<app::GUILayer>(get_class());
        }
    } // namespace GUILayer
} // namespace app::classes::types
