#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Variable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Variable__Class** type_info;
        inline app::Variable__Class* get_class() {
            return il2cpp::get_class<app::Variable__Class>(type_info, "MS.Internal.Xml.XPath", "Variable");
        }
        inline app::Variable* create() {
            return il2cpp::create_object<app::Variable>(get_class());
        }
    } // namespace Variable
} // namespace app::classes::types
