#pragma once
#include <Modloader/app/structs/GhostAnimationData.h>
#include <Modloader/app/structs/GhostAnimationData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationData {
        inline app::GhostAnimationData__Class** type_info() {
            static app::GhostAnimationData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostAnimationData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostAnimationData__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationData__Class>(type_info(), "", "GhostAnimationData");
        }
        inline app::GhostAnimationData* create() {
            return il2cpp::create_object<app::GhostAnimationData>(get_class());
        }
    } // namespace GhostAnimationData
} // namespace app::classes::types
