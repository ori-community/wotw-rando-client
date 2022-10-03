#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QNameFacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QNameFacetsChecker__Class** type_info;
        inline app::QNameFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::QNameFacetsChecker__Class>(type_info, "System.Xml.Schema", "QNameFacetsChecker");
        }
        inline app::QNameFacetsChecker* create() {
            return il2cpp::create_object<app::QNameFacetsChecker>(get_class());
        }
    } // namespace QNameFacetsChecker
} // namespace app::classes::types
