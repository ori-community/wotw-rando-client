#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlaySoundAction {
        namespace {
            app::PlaySoundAction__Class* type_info_ref = nullptr;
        }
        app::PlaySoundAction__Class** type_info = &type_info_ref;
        inline app::PlaySoundAction__Class* get_class() {
            return il2cpp::get_class<app::PlaySoundAction__Class>(type_info, "", "PlaySoundAction");
        }
        inline app::PlaySoundAction* create() {
            return il2cpp::create_object<app::PlaySoundAction>(get_class());
        }
    } // namespace PlaySoundAction
} // namespace app::classes::types
