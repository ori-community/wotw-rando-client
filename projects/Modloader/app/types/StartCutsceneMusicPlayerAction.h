#pragma once
#include <Modloader/app/structs/StartCutsceneMusicPlayerAction.h>
#include <Modloader/app/structs/StartCutsceneMusicPlayerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartCutsceneMusicPlayerAction {
        inline app::StartCutsceneMusicPlayerAction__Class** type_info() {
            static app::StartCutsceneMusicPlayerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StartCutsceneMusicPlayerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StartCutsceneMusicPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::StartCutsceneMusicPlayerAction__Class>(type_info(), "", "StartCutsceneMusicPlayerAction");
        }
        inline app::StartCutsceneMusicPlayerAction* create() {
            return il2cpp::create_object<app::StartCutsceneMusicPlayerAction>(get_class());
        }
    } // namespace StartCutsceneMusicPlayerAction
} // namespace app::classes::types
