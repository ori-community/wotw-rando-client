#pragma once
#include <Modloader/app/structs/SceneUberStateGroup__Array.h>
#include <Modloader/app/structs/SceneUberStateGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneUberStateGroup__Array {
        inline app::SceneUberStateGroup__Array__Class** type_info() {
            static app::SceneUberStateGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneUberStateGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneUberStateGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneUberStateGroup__Array__Class>(type_info(), "Moon", "SceneUberStateGroup[]");
        }
        inline app::SceneUberStateGroup__Array* create() {
            return il2cpp::create_object<app::SceneUberStateGroup__Array>(get_class());
        }
    } // namespace SceneUberStateGroup__Array
} // namespace app::classes::types
