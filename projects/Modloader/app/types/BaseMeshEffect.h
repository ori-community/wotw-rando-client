#pragma once
#include <Modloader/app/structs/BaseMeshEffect.h>
#include <Modloader/app/structs/BaseMeshEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseMeshEffect {
        inline app::BaseMeshEffect__Class** type_info() {
            static app::BaseMeshEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseMeshEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseMeshEffect__Class* get_class() {
            return il2cpp::get_class<app::BaseMeshEffect__Class>(type_info(), "UnityEngine.UI", "BaseMeshEffect");
        }
        inline app::BaseMeshEffect* create() {
            return il2cpp::create_object<app::BaseMeshEffect>(get_class());
        }
    } // namespace BaseMeshEffect
} // namespace app::classes::types
