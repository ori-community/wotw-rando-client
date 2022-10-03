#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_LaterInitParam {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextReaderImpl_LaterInitParam__Class** type_info;
        inline app::XmlTextReaderImpl_LaterInitParam__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_LaterInitParam__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "LaterInitParam");
        }
        inline app::XmlTextReaderImpl_LaterInitParam* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_LaterInitParam>(get_class());
        }
    } // namespace XmlTextReaderImpl_LaterInitParam
} // namespace app::classes::types
