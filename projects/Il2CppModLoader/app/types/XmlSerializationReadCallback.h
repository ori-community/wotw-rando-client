#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializationReadCallback {
        inline app::XmlSerializationReadCallback__Class** type_info = (app::XmlSerializationReadCallback__Class**)(modloader::win::memory::resolve_rva(0x0474CC38));
        inline app::XmlSerializationReadCallback__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationReadCallback__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReadCallback");
        }
        inline app::XmlSerializationReadCallback* create() {
            return il2cpp::create_object<app::XmlSerializationReadCallback>(get_class());
        }
    } // namespace XmlSerializationReadCallback
} // namespace app::classes::types
