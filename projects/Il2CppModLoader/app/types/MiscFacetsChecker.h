#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MiscFacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MiscFacetsChecker__Class** type_info;
        inline app::MiscFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::MiscFacetsChecker__Class>(type_info, "System.Xml.Schema", "MiscFacetsChecker");
        }
        inline app::MiscFacetsChecker* create() {
            return il2cpp::create_object<app::MiscFacetsChecker>(get_class());
        }
    } // namespace MiscFacetsChecker
} // namespace app::classes::types
