#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextReaderImpl__Class** type_info;
        inline app::XmlTextReaderImpl__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReaderImpl__Class>(type_info, "System.Xml", "XmlTextReaderImpl");
        }
        inline app::XmlTextReaderImpl* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl>(get_class());
        }
    } // namespace XmlTextReaderImpl
} // namespace app::classes::types
