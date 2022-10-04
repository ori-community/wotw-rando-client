#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILayoutElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILayoutElement__Class** type_info;
        inline app::ILayoutElement__Class* get_class() {
            return il2cpp::get_class<app::ILayoutElement__Class>(type_info, "UnityEngine.UI", "ILayoutElement");
        }
        inline app::ILayoutElement* create() {
            return il2cpp::create_object<app::ILayoutElement>(get_class());
        }
    } // namespace ILayoutElement
} // namespace app::classes::types
