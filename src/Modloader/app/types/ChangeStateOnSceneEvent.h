#pragma once
#include <Modloader/app/structs/ChangeStateOnSceneEvent.h>
#include <Modloader/app/structs/ChangeStateOnSceneEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateOnSceneEvent {
        inline app::ChangeStateOnSceneEvent__Class** type_info() {
            static app::ChangeStateOnSceneEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateOnSceneEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateOnSceneEvent__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateOnSceneEvent__Class>(type_info(), "Moon.Setups", "ChangeStateOnSceneEvent");
        }
        inline app::ChangeStateOnSceneEvent* create() {
            return il2cpp::create_object<app::ChangeStateOnSceneEvent>(get_class());
        }
    } // namespace ChangeStateOnSceneEvent
} // namespace app::classes::types
