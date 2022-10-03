#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListFacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListFacetsChecker__Class** type_info;
        inline app::ListFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::ListFacetsChecker__Class>(type_info, "System.Xml.Schema", "ListFacetsChecker");
        }
        inline app::ListFacetsChecker* create() {
            return il2cpp::create_object<app::ListFacetsChecker>(get_class());
        }
    } // namespace ListFacetsChecker
} // namespace app::classes::types
