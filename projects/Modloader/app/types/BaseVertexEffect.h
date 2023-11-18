#pragma once
#include <Modloader/app/structs/BaseVertexEffect.h>
#include <Modloader/app/structs/BaseVertexEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseVertexEffect {
        inline app::BaseVertexEffect__Class** type_info() {
            static app::BaseVertexEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseVertexEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseVertexEffect__Class* get_class() {
            return il2cpp::get_class<app::BaseVertexEffect__Class>(type_info(), "UnityEngine.UI", "BaseVertexEffect");
        }
        inline app::BaseVertexEffect* create() {
            return il2cpp::create_object<app::BaseVertexEffect>(get_class());
        }
    } // namespace BaseVertexEffect
} // namespace app::classes::types
