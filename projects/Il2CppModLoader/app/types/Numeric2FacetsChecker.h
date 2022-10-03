#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Numeric2FacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Numeric2FacetsChecker__Class** type_info;
        inline app::Numeric2FacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::Numeric2FacetsChecker__Class>(type_info, "System.Xml.Schema", "Numeric2FacetsChecker");
        }
        inline app::Numeric2FacetsChecker* create() {
            return il2cpp::create_object<app::Numeric2FacetsChecker>(get_class());
        }
    } // namespace Numeric2FacetsChecker
} // namespace app::classes::types
