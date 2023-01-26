#pragma once
#include <Modloader/app/structs/CanvasScaler.h>
#include <Modloader/app/structs/CanvasScaler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanvasScaler {
        inline app::CanvasScaler__Class** type_info() {
            static app::CanvasScaler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanvasScaler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanvasScaler__Class* get_class() {
            return il2cpp::get_class<app::CanvasScaler__Class>(type_info(), "UnityEngine.UI", "CanvasScaler");
        }
        inline app::CanvasScaler* create() {
            return il2cpp::create_object<app::CanvasScaler>(get_class());
        }
    } // namespace CanvasScaler
} // namespace app::classes::types
