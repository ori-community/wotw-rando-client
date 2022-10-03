#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlValidatingReaderImpl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlValidatingReaderImpl__Class** type_info;
        inline app::XmlValidatingReaderImpl__Class* get_class() {
            return il2cpp::get_class<app::XmlValidatingReaderImpl__Class>(type_info, "System.Xml", "XmlValidatingReaderImpl");
        }
        inline app::XmlValidatingReaderImpl* create() {
            return il2cpp::create_object<app::XmlValidatingReaderImpl>(get_class());
        }
    } // namespace XmlValidatingReaderImpl
} // namespace app::classes::types
