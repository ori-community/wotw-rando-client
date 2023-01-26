#pragma once
#include <Modloader/app/structs/TrailRenderer.h>
#include <Modloader/app/structs/TrailRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrailRenderer {
        inline app::TrailRenderer__Class** type_info() {
            static app::TrailRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrailRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrailRenderer__Class* get_class() {
            return il2cpp::get_class<app::TrailRenderer__Class>(type_info(), "UnityEngine", "TrailRenderer");
        }
        inline app::TrailRenderer* create() {
            return il2cpp::create_object<app::TrailRenderer>(get_class());
        }
    } // namespace TrailRenderer
} // namespace app::classes::types
