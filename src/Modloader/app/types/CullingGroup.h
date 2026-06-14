#pragma once
#include <Modloader/app/structs/CullingGroup.h>
#include <Modloader/app/structs/CullingGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CullingGroup {
        inline app::CullingGroup__Class** type_info() {
            static app::CullingGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CullingGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CullingGroup__Class* get_class() {
            return il2cpp::get_class<app::CullingGroup__Class>(type_info(), "UnityEngine", "CullingGroup");
        }
        inline app::CullingGroup* create() {
            return il2cpp::create_object<app::CullingGroup>(get_class());
        }
    } // namespace CullingGroup
} // namespace app::classes::types
