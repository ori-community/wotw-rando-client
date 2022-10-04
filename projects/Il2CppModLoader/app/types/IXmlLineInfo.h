#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlLineInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlLineInfo__Class** type_info;
        inline app::IXmlLineInfo__Class* get_class() {
            return il2cpp::get_class<app::IXmlLineInfo__Class>(type_info, "System.Xml", "IXmlLineInfo");
        }
        inline app::IXmlLineInfo* create() {
            return il2cpp::create_object<app::IXmlLineInfo>(get_class());
        }
    } // namespace IXmlLineInfo
} // namespace app::classes::types
