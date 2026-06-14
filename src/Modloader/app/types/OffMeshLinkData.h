#pragma once
#include <Modloader/app/structs/OffMeshLinkData.h>
#include <Modloader/app/structs/OffMeshLinkData__Boxed.h>
#include <Modloader/app/structs/OffMeshLinkData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffMeshLinkData {
        inline app::OffMeshLinkData__Class** type_info() {
            static app::OffMeshLinkData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffMeshLinkData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffMeshLinkData__Class* get_class() {
            return il2cpp::get_class<app::OffMeshLinkData__Class>(type_info(), "UnityEngine.AI", "OffMeshLinkData");
        }
        inline app::OffMeshLinkData* create() {
            return il2cpp::create_object<app::OffMeshLinkData>(get_class());
        }
        inline app::OffMeshLinkData__Boxed* box(app::OffMeshLinkData value) {
            return il2cpp::box_value<app::OffMeshLinkData__Boxed>(get_class(), value);
        }
    } // namespace OffMeshLinkData
} // namespace app::classes::types
