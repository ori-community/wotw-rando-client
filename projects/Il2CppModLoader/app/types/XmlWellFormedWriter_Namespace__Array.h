#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_Namespace__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlWellFormedWriter_Namespace__Array__Class** type_info;
        inline app::XmlWellFormedWriter_Namespace__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlWellFormedWriter_Namespace__Array__Class>(type_info, "System.Xml", "XmlWellFormedWriter+Namespace[]");
        }
        inline app::XmlWellFormedWriter_Namespace__Array* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_Namespace__Array>(get_class());
        }
    } // namespace XmlWellFormedWriter_Namespace__Array
} // namespace app::classes::types
