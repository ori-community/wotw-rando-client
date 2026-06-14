#pragma once
#include <Modloader/app/structs/OffMeshLinkType__Enum.h>
#include <Modloader/app/structs/OffMeshLinkType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffMeshLinkType__Enum {
        inline app::OffMeshLinkType__Enum__Class** type_info() {
            static app::OffMeshLinkType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffMeshLinkType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffMeshLinkType__Enum__Class* get_class() {
            return il2cpp::get_class<app::OffMeshLinkType__Enum__Class>(type_info(), "UnityEngine.AI", "OffMeshLinkType");
        }
        inline app::OffMeshLinkType__Enum* create() {
            return il2cpp::create_object<app::OffMeshLinkType__Enum>(get_class());
        }
    } // namespace OffMeshLinkType__Enum
} // namespace app::classes::types
