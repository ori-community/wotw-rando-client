#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlDataTreeWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlDataTreeWriter__Class** type_info;
        inline app::XmlDataTreeWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlDataTreeWriter__Class>(type_info, "System.Data", "XmlDataTreeWriter");
        }
        inline app::XmlDataTreeWriter* create() {
            return il2cpp::create_object<app::XmlDataTreeWriter>(get_class());
        }
    } // namespace XmlDataTreeWriter
} // namespace app::classes::types
