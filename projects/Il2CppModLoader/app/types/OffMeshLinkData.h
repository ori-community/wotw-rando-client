#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffMeshLinkData {
        namespace {
            app::OffMeshLinkData__Class* type_info_ref = nullptr;
        }
        app::OffMeshLinkData__Class** type_info = &type_info_ref;
        inline app::OffMeshLinkData__Class* get_class() {
            return il2cpp::get_class<app::OffMeshLinkData__Class>(type_info, "UnityEngine.AI", "OffMeshLinkData");
        }
        inline app::OffMeshLinkData* create() {
            return il2cpp::create_object<app::OffMeshLinkData>(get_class());
        }
        inline app::OffMeshLinkData__Boxed* box(app::OffMeshLinkData value) {
            return il2cpp::box_value<app::OffMeshLinkData__Boxed>(get_class(), value);
        }
    } // namespace OffMeshLinkData
} // namespace app::classes::types
