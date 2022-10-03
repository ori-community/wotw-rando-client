#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestrictionFacets {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RestrictionFacets__Class** type_info;
        inline app::RestrictionFacets__Class* get_class() {
            return il2cpp::get_class<app::RestrictionFacets__Class>(type_info, "System.Xml.Schema", "RestrictionFacets");
        }
        inline app::RestrictionFacets* create() {
            return il2cpp::create_object<app::RestrictionFacets>(get_class());
        }
    } // namespace RestrictionFacets
} // namespace app::classes::types
