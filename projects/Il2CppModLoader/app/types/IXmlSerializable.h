#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlSerializable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlSerializable__Class** type_info;
        inline app::IXmlSerializable__Class* get_class() {
            return il2cpp::get_class<app::IXmlSerializable__Class>(type_info, "System.Xml.Serialization", "IXmlSerializable");
        }
    } // namespace IXmlSerializable
} // namespace app::classes::types
