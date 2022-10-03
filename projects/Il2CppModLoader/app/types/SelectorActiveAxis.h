#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SelectorActiveAxis {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SelectorActiveAxis__Class** type_info;
        inline app::SelectorActiveAxis__Class* get_class() {
            return il2cpp::get_class<app::SelectorActiveAxis__Class>(type_info, "System.Xml.Schema", "SelectorActiveAxis");
        }
        inline app::SelectorActiveAxis* create() {
            return il2cpp::create_object<app::SelectorActiveAxis>(get_class());
        }
    } // namespace SelectorActiveAxis
} // namespace app::classes::types
