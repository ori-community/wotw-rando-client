#pragma once
#include <Modloader/app/structs/SceneDeletionFlags__Enum.h>
#include <Modloader/app/structs/SceneDeletionFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneDeletionFlags__Enum {
        inline app::SceneDeletionFlags__Enum__Class** type_info() {
            static app::SceneDeletionFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneDeletionFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneDeletionFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneDeletionFlags__Enum__Class>(type_info(), "Moon.EditorTools.SceneTracking", "SceneDeletionFlags");
        }
        inline app::SceneDeletionFlags__Enum* create() {
            return il2cpp::create_object<app::SceneDeletionFlags__Enum>(get_class());
        }
    } // namespace SceneDeletionFlags__Enum
} // namespace app::classes::types
