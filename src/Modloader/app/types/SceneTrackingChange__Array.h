#pragma once
#include <Modloader/app/structs/SceneTrackingChange__Array.h>
#include <Modloader/app/structs/SceneTrackingChange__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneTrackingChange__Array {
        inline app::SceneTrackingChange__Array__Class** type_info() {
            static app::SceneTrackingChange__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneTrackingChange__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneTrackingChange__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneTrackingChange__Array__Class>(type_info(), "Moon.EditorTools.SceneTracking", "SceneTrackingChange[]");
        }
        inline app::SceneTrackingChange__Array* create() {
            return il2cpp::create_object<app::SceneTrackingChange__Array>(get_class());
        }
    } // namespace SceneTrackingChange__Array
} // namespace app::classes::types
