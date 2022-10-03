#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryFacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryFacetsChecker__Class** type_info;
        inline app::BinaryFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::BinaryFacetsChecker__Class>(type_info, "System.Xml.Schema", "BinaryFacetsChecker");
        }
        inline app::BinaryFacetsChecker* create() {
            return il2cpp::create_object<app::BinaryFacetsChecker>(get_class());
        }
    } // namespace BinaryFacetsChecker
} // namespace app::classes::types
