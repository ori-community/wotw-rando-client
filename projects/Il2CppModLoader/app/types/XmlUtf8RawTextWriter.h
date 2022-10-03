#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlUtf8RawTextWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlUtf8RawTextWriter__Class** type_info;
        inline app::XmlUtf8RawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlUtf8RawTextWriter__Class>(type_info, "System.Xml", "XmlUtf8RawTextWriter");
        }
        inline app::XmlUtf8RawTextWriter* create() {
            return il2cpp::create_object<app::XmlUtf8RawTextWriter>(get_class());
        }
    } // namespace XmlUtf8RawTextWriter
} // namespace app::classes::types
