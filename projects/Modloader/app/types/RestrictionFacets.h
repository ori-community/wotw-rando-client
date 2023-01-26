#pragma once
#include <Modloader/app/structs/RestrictionFacets.h>
#include <Modloader/app/structs/RestrictionFacets__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestrictionFacets {
        inline app::RestrictionFacets__Class** type_info() {
            static app::RestrictionFacets__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RestrictionFacets__Class**)(modloader::win::memory::resolve_rva(0x04766E00));
            }
            return cache;
        }
        inline app::RestrictionFacets__Class* get_class() {
            return il2cpp::get_class<app::RestrictionFacets__Class>(type_info(), "System.Xml.Schema", "RestrictionFacets");
        }
        inline app::RestrictionFacets* create() {
            return il2cpp::create_object<app::RestrictionFacets>(get_class());
        }
    } // namespace RestrictionFacets
} // namespace app::classes::types
