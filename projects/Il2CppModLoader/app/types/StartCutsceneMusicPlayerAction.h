#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartCutsceneMusicPlayerAction {
        namespace {
            app::StartCutsceneMusicPlayerAction__Class* type_info_ref = nullptr;
        }
        app::StartCutsceneMusicPlayerAction__Class** type_info = &type_info_ref;
        inline app::StartCutsceneMusicPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::StartCutsceneMusicPlayerAction__Class>(type_info, "", "StartCutsceneMusicPlayerAction");
        }
        inline app::StartCutsceneMusicPlayerAction* create() {
            return il2cpp::create_object<app::StartCutsceneMusicPlayerAction>(get_class());
        }
    } // namespace StartCutsceneMusicPlayerAction
} // namespace app::classes::types
