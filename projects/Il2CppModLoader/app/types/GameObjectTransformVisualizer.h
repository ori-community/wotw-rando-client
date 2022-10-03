#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectTransformVisualizer {
        namespace {
            app::GameObjectTransformVisualizer__Class* type_info_ref = nullptr;
        }
        app::GameObjectTransformVisualizer__Class** type_info = &type_info_ref;
        inline app::GameObjectTransformVisualizer__Class* get_class() {
            return il2cpp::get_class<app::GameObjectTransformVisualizer__Class>(type_info, "", "GameObjectTransformVisualizer");
        }
        inline app::GameObjectTransformVisualizer* create() {
            return il2cpp::create_object<app::GameObjectTransformVisualizer>(get_class());
        }
    } // namespace GameObjectTransformVisualizer
} // namespace app::classes::types
