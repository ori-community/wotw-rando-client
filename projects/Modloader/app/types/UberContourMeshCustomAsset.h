#pragma once
#include <Modloader/app/structs/UberContourMeshCustomAsset.h>
#include <Modloader/app/structs/UberContourMeshCustomAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberContourMeshCustomAsset {
        inline app::UberContourMeshCustomAsset__Class** type_info() {
            static app::UberContourMeshCustomAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberContourMeshCustomAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberContourMeshCustomAsset__Class* get_class() {
            return il2cpp::get_class<app::UberContourMeshCustomAsset__Class>(type_info(), "", "UberContourMeshCustomAsset");
        }
        inline app::UberContourMeshCustomAsset* create() {
            return il2cpp::create_object<app::UberContourMeshCustomAsset>(get_class());
        }
    } // namespace UberContourMeshCustomAsset
} // namespace app::classes::types
