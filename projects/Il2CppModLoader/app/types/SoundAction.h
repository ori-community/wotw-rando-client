#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundAction {
        namespace {
            app::SoundAction__Class* type_info_ref = nullptr;
        }
        app::SoundAction__Class** type_info = &type_info_ref;
        inline app::SoundAction__Class* get_class() {
            return il2cpp::get_class<app::SoundAction__Class>(type_info, "", "SoundAction");
        }
        inline app::SoundAction* create() {
            return il2cpp::create_object<app::SoundAction>(get_class());
        }
    } // namespace SoundAction
} // namespace app::classes::types
