#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureMetaDataGroup {
        namespace {
            app::CageStructureMetaDataGroup__Class* type_info_ref = nullptr;
        }
        app::CageStructureMetaDataGroup__Class** type_info = &type_info_ref;
        inline app::CageStructureMetaDataGroup__Class* get_class() {
            return il2cpp::get_class<app::CageStructureMetaDataGroup__Class>(type_info, "", "CageStructureMetaDataGroup");
        }
        inline app::CageStructureMetaDataGroup* create() {
            return il2cpp::create_object<app::CageStructureMetaDataGroup>(get_class());
        }
    } // namespace CageStructureMetaDataGroup
} // namespace app::classes::types
