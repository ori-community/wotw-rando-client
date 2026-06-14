#pragma once
#include <Modloader/app/structs/UnsuspendSceneAction.h>
#include <Modloader/app/structs/UnsuspendSceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnsuspendSceneAction {
        inline app::UnsuspendSceneAction__Class** type_info() {
            static app::UnsuspendSceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnsuspendSceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnsuspendSceneAction__Class* get_class() {
            return il2cpp::get_class<app::UnsuspendSceneAction__Class>(type_info(), "", "UnsuspendSceneAction");
        }
        inline app::UnsuspendSceneAction* create() {
            return il2cpp::create_object<app::UnsuspendSceneAction>(get_class());
        }
    } // namespace UnsuspendSceneAction
} // namespace app::classes::types
