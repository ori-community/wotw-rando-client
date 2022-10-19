#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAttributes {
        inline app::XmlAttributes__Class** type_info = (app::XmlAttributes__Class**)(modloader::win::memory::resolve_rva(0x04726FF8));
        inline app::XmlAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributes__Class>(type_info, "System.Xml.Serialization", "XmlAttributes");
        }
        inline app::XmlAttributes* create() {
            return il2cpp::create_object<app::XmlAttributes>(get_class());
        }
    } // namespace XmlAttributes
} // namespace app::classes::types
