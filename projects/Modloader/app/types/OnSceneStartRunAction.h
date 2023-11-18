#pragma once
#include <Modloader/app/structs/OnSceneStartRunAction.h>
#include <Modloader/app/structs/OnSceneStartRunAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnSceneStartRunAction {
        inline app::OnSceneStartRunAction__Class** type_info() {
            static app::OnSceneStartRunAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnSceneStartRunAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnSceneStartRunAction__Class* get_class() {
            return il2cpp::get_class<app::OnSceneStartRunAction__Class>(type_info(), "", "OnSceneStartRunAction");
        }
        inline app::OnSceneStartRunAction* create() {
            return il2cpp::create_object<app::OnSceneStartRunAction>(get_class());
        }
    } // namespace OnSceneStartRunAction
} // namespace app::classes::types
