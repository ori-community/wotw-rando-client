#pragma once
#include <Modloader/app/structs/CrossFadeSceneAction.h>
#include <Modloader/app/structs/CrossFadeSceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossFadeSceneAction {
        inline app::CrossFadeSceneAction__Class** type_info() {
            static app::CrossFadeSceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossFadeSceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossFadeSceneAction__Class* get_class() {
            return il2cpp::get_class<app::CrossFadeSceneAction__Class>(type_info(), "", "CrossFadeSceneAction");
        }
        inline app::CrossFadeSceneAction* create() {
            return il2cpp::create_object<app::CrossFadeSceneAction>(get_class());
        }
    } // namespace CrossFadeSceneAction
} // namespace app::classes::types
