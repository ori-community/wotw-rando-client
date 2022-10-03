#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_Namespace__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextWriter_Namespace__Array__Class** type_info;
        inline app::XmlTextWriter_Namespace__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriter_Namespace__Array__Class>(type_info, "System.Xml", "XmlTextWriter+Namespace[]");
        }
        inline app::XmlTextWriter_Namespace__Array* create() {
            return il2cpp::create_object<app::XmlTextWriter_Namespace__Array>(get_class());
        }
    } // namespace XmlTextWriter_Namespace__Array
} // namespace app::classes::types
