#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAutoDetectWriter {
        inline app::XmlAutoDetectWriter__Class** type_info = (app::XmlAutoDetectWriter__Class**)(modloader::win::memory::resolve_rva(0x04781DB8));
        inline app::XmlAutoDetectWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlAutoDetectWriter__Class>(type_info, "System.Xml", "XmlAutoDetectWriter");
        }
        inline app::XmlAutoDetectWriter* create() {
            return il2cpp::create_object<app::XmlAutoDetectWriter>(get_class());
        }
    } // namespace XmlAutoDetectWriter
} // namespace app::classes::types
