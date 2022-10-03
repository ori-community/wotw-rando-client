#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Numeric10FacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Numeric10FacetsChecker__Class** type_info;
        inline app::Numeric10FacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::Numeric10FacetsChecker__Class>(type_info, "System.Xml.Schema", "Numeric10FacetsChecker");
        }
        inline app::Numeric10FacetsChecker* create() {
            return il2cpp::create_object<app::Numeric10FacetsChecker>(get_class());
        }
    } // namespace Numeric10FacetsChecker
} // namespace app::classes::types
