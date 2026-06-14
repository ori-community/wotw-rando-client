#pragma once
#include <Modloader/app/structs/CageStructureMetaDataGroup.h>
#include <Modloader/app/structs/CageStructureMetaDataGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureMetaDataGroup {
        inline app::CageStructureMetaDataGroup__Class** type_info() {
            static app::CageStructureMetaDataGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageStructureMetaDataGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageStructureMetaDataGroup__Class* get_class() {
            return il2cpp::get_class<app::CageStructureMetaDataGroup__Class>(type_info(), "", "CageStructureMetaDataGroup");
        }
        inline app::CageStructureMetaDataGroup* create() {
            return il2cpp::create_object<app::CageStructureMetaDataGroup>(get_class());
        }
    } // namespace CageStructureMetaDataGroup
} // namespace app::classes::types
