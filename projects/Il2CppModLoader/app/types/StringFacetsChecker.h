#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringFacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringFacetsChecker__Class** type_info;
        inline app::StringFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::StringFacetsChecker__Class>(type_info, "System.Xml.Schema", "StringFacetsChecker");
        }
        inline app::StringFacetsChecker* create() {
            return il2cpp::create_object<app::StringFacetsChecker>(get_class());
        }
    } // namespace StringFacetsChecker
} // namespace app::classes::types
