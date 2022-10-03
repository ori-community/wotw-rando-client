#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_TagInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextWriter_TagInfo__Array__Class** type_info;
        inline app::XmlTextWriter_TagInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriter_TagInfo__Array__Class>(type_info, "System.Xml", "XmlTextWriter+TagInfo[]");
        }
        inline app::XmlTextWriter_TagInfo__Array* create() {
            return il2cpp::create_object<app::XmlTextWriter_TagInfo__Array>(get_class());
        }
    } // namespace XmlTextWriter_TagInfo__Array
} // namespace app::classes::types
