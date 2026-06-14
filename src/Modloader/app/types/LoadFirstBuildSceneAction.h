#pragma once
#include <Modloader/app/structs/LoadFirstBuildSceneAction.h>
#include <Modloader/app/structs/LoadFirstBuildSceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadFirstBuildSceneAction {
        inline app::LoadFirstBuildSceneAction__Class** type_info() {
            static app::LoadFirstBuildSceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadFirstBuildSceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadFirstBuildSceneAction__Class* get_class() {
            return il2cpp::get_class<app::LoadFirstBuildSceneAction__Class>(type_info(), "", "LoadFirstBuildSceneAction");
        }
        inline app::LoadFirstBuildSceneAction* create() {
            return il2cpp::create_object<app::LoadFirstBuildSceneAction>(get_class());
        }
    } // namespace LoadFirstBuildSceneAction
} // namespace app::classes::types
