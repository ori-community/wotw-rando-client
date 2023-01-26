#pragma once
#include <Modloader/app/structs/PreloadSceneAction.h>
#include <Modloader/app/structs/PreloadSceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreloadSceneAction {
        inline app::PreloadSceneAction__Class** type_info() {
            static app::PreloadSceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreloadSceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreloadSceneAction__Class* get_class() {
            return il2cpp::get_class<app::PreloadSceneAction__Class>(type_info(), "", "PreloadSceneAction");
        }
        inline app::PreloadSceneAction* create() {
            return il2cpp::create_object<app::PreloadSceneAction>(get_class());
        }
    } // namespace PreloadSceneAction
} // namespace app::classes::types
