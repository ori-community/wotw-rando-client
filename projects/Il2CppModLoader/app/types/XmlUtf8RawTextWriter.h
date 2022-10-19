#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlUtf8RawTextWriter {
        inline app::XmlUtf8RawTextWriter__Class** type_info = (app::XmlUtf8RawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x0478E3F0));
        inline app::XmlUtf8RawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlUtf8RawTextWriter__Class>(type_info, "System.Xml", "XmlUtf8RawTextWriter");
        }
        inline app::XmlUtf8RawTextWriter* create() {
            return il2cpp::create_object<app::XmlUtf8RawTextWriter>(get_class());
        }
    } // namespace XmlUtf8RawTextWriter
} // namespace app::classes::types
