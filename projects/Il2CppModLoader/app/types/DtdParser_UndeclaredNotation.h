#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DtdParser_UndeclaredNotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DtdParser_UndeclaredNotation__Class** type_info;
        inline app::DtdParser_UndeclaredNotation__Class* get_class() {
            return il2cpp::get_nested_class<app::DtdParser_UndeclaredNotation__Class>(type_info, "System.Xml", "DtdParser", "UndeclaredNotation");
        }
        inline app::DtdParser_UndeclaredNotation* create() {
            return il2cpp::create_object<app::DtdParser_UndeclaredNotation>(get_class());
        }
        inline app::DtdParser_UndeclaredNotation__Array* create_array(int size) {
            return il2cpp::array_new<app::DtdParser_UndeclaredNotation__Array>(get_class(), size);
        }
        inline app::DtdParser_UndeclaredNotation__Array* create_array(const std::vector<app::DtdParser_UndeclaredNotation*>& items) {
            return il2cpp::array_new<app::DtdParser_UndeclaredNotation__Array>(get_class(), items);
        }
    } // namespace DtdParser_UndeclaredNotation
} // namespace app::classes::types
