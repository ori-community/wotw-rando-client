#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Operand {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Operand__Class** type_info;
        inline app::Operand__Class* get_class() {
            return il2cpp::get_class<app::Operand__Class>(type_info, "MS.Internal.Xml.XPath", "Operand");
        }
        inline app::Operand* create() {
            return il2cpp::create_object<app::Operand>(get_class());
        }
    } // namespace Operand
} // namespace app::classes::types
