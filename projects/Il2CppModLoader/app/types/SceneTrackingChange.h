#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneTrackingChange {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneTrackingChange__Class** type_info;
        inline app::SceneTrackingChange__Class* get_class() {
            return il2cpp::get_class<app::SceneTrackingChange__Class>(type_info, "Moon.EditorTools.SceneTracking", "SceneTrackingChange");
        }
        inline app::SceneTrackingChange* create() {
            return il2cpp::create_object<app::SceneTrackingChange>(get_class());
        }
        inline app::SceneTrackingChange__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneTrackingChange__Array>(get_class(), size);
        }
    } // namespace SceneTrackingChange
} // namespace app::classes::types
