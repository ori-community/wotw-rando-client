#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_XmlContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextReaderImpl_XmlContext__Class** type_info;
        inline app::XmlTextReaderImpl_XmlContext__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_XmlContext__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "XmlContext");
        }
        inline app::XmlTextReaderImpl_XmlContext* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_XmlContext>(get_class());
        }
    } // namespace XmlTextReaderImpl_XmlContext
} // namespace app::classes::types
