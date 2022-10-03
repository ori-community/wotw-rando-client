#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAutoDetectWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAutoDetectWriter__Class** type_info;
        inline app::XmlAutoDetectWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlAutoDetectWriter__Class>(type_info, "System.Xml", "XmlAutoDetectWriter");
        }
        inline app::XmlAutoDetectWriter* create() {
            return il2cpp::create_object<app::XmlAutoDetectWriter>(get_class());
        }
    } // namespace XmlAutoDetectWriter
} // namespace app::classes::types
