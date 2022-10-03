#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Operator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Operator__Class** type_info;
        inline app::Operator__Class* get_class() {
            return il2cpp::get_class<app::Operator__Class>(type_info, "MS.Internal.Xml.XPath", "Operator");
        }
        inline app::Operator* create() {
            return il2cpp::create_object<app::Operator>(get_class());
        }
    } // namespace Operator
} // namespace app::classes::types
