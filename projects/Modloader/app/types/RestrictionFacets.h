#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RestrictionFacets__Class.h>
#include <Modloader/app/structs/RestrictionFacets.h>

namespace app::classes::types {
    namespace RestrictionFacets {
        inline app::RestrictionFacets__Class** type_info = (app::RestrictionFacets__Class**)(modloader::win::memory::resolve_rva(0x04766E00));
        inline app::RestrictionFacets__Class* get_class() {
            return il2cpp::get_class<app::RestrictionFacets__Class>(type_info, "System.Xml.Schema", "RestrictionFacets");
        }
        inline app::RestrictionFacets* create() {
            return il2cpp::create_object<app::RestrictionFacets>(get_class());
        }
    } // namespace RestrictionFacets
} // namespace app::classes::types
