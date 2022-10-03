#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XPathDocumentNavigator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XPathDocumentNavigator__Class** type_info;
        inline app::XPathDocumentNavigator__Class* get_class() {
            return il2cpp::get_class<app::XPathDocumentNavigator__Class>(type_info, "MS.Internal.Xml.Cache", "XPathDocumentNavigator");
        }
        inline app::XPathDocumentNavigator* create() {
            return il2cpp::create_object<app::XPathDocumentNavigator>(get_class());
        }
    } // namespace XPathDocumentNavigator
} // namespace app::classes::types
