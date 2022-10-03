#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIWordWrapSizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIWordWrapSizer__Class** type_info;
        inline app::GUIWordWrapSizer__Class* get_class() {
            return il2cpp::get_class<app::GUIWordWrapSizer__Class>(type_info, "UnityEngine", "GUIWordWrapSizer");
        }
        inline app::GUIWordWrapSizer* create() {
            return il2cpp::create_object<app::GUIWordWrapSizer>(get_class());
        }
    } // namespace GUIWordWrapSizer
} // namespace app::classes::types
