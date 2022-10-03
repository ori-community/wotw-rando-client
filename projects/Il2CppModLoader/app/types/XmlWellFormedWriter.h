#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlWellFormedWriter__Class** type_info;
        inline app::XmlWellFormedWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlWellFormedWriter__Class>(type_info, "System.Xml", "XmlWellFormedWriter");
        }
        inline app::XmlWellFormedWriter* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter>(get_class());
        }
    } // namespace XmlWellFormedWriter
} // namespace app::classes::types
