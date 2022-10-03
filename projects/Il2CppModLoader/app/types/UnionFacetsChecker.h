#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnionFacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnionFacetsChecker__Class** type_info;
        inline app::UnionFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::UnionFacetsChecker__Class>(type_info, "System.Xml.Schema", "UnionFacetsChecker");
        }
        inline app::UnionFacetsChecker* create() {
            return il2cpp::create_object<app::UnionFacetsChecker>(get_class());
        }
    } // namespace UnionFacetsChecker
} // namespace app::classes::types
