#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneTrackingChange__Array {
        namespace {
            inline app::SceneTrackingChange__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneTrackingChange__Array__Class** type_info = &type_info_ref;
        inline app::SceneTrackingChange__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneTrackingChange__Array__Class>(type_info, "Moon.EditorTools.SceneTracking", "SceneTrackingChange[]");
        }
        inline app::SceneTrackingChange__Array* create() {
            return il2cpp::create_object<app::SceneTrackingChange__Array>(get_class());
        }
    } // namespace SceneTrackingChange__Array
} // namespace app::classes::types
