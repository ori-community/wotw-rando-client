#pragma once
#include <Modloader/app/structs/LoadSceneAction.h>
#include <Modloader/app/structs/LoadSceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadSceneAction {
        inline app::LoadSceneAction__Class** type_info() {
            static app::LoadSceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadSceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadSceneAction__Class* get_class() {
            return il2cpp::get_class<app::LoadSceneAction__Class>(type_info(), "", "LoadSceneAction");
        }
        inline app::LoadSceneAction* create() {
            return il2cpp::create_object<app::LoadSceneAction>(get_class());
        }
    } // namespace LoadSceneAction
} // namespace app::classes::types
