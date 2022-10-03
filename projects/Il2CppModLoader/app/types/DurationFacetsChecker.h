#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DurationFacetsChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DurationFacetsChecker__Class** type_info;
        inline app::DurationFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::DurationFacetsChecker__Class>(type_info, "System.Xml.Schema", "DurationFacetsChecker");
        }
        inline app::DurationFacetsChecker* create() {
            return il2cpp::create_object<app::DurationFacetsChecker>(get_class());
        }
    } // namespace DurationFacetsChecker
} // namespace app::classes::types
