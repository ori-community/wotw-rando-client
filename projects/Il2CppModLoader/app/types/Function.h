#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Function {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Function__Class** type_info;
        inline app::Function__Class* get_class() {
            return il2cpp::get_class<app::Function__Class>(type_info, "MS.Internal.Xml.XPath", "Function");
        }
        inline app::Function* create() {
            return il2cpp::create_object<app::Function>(get_class());
        }
    } // namespace Function
} // namespace app::classes::types
