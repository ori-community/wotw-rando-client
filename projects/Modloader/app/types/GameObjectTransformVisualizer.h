#pragma once
#include <Modloader/app/structs/GameObjectTransformVisualizer.h>
#include <Modloader/app/structs/GameObjectTransformVisualizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectTransformVisualizer {
        inline app::GameObjectTransformVisualizer__Class** type_info() {
            static app::GameObjectTransformVisualizer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameObjectTransformVisualizer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameObjectTransformVisualizer__Class* get_class() {
            return il2cpp::get_class<app::GameObjectTransformVisualizer__Class>(type_info(), "", "GameObjectTransformVisualizer");
        }
        inline app::GameObjectTransformVisualizer* create() {
            return il2cpp::create_object<app::GameObjectTransformVisualizer>(get_class());
        }
    } // namespace GameObjectTransformVisualizer
} // namespace app::classes::types
