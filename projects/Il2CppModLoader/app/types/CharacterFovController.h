#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterFovController {
        namespace {
            app::CharacterFovController__Class* type_info_ref = nullptr;
        }
        app::CharacterFovController__Class** type_info = &type_info_ref;
        inline app::CharacterFovController__Class* get_class() {
            return il2cpp::get_class<app::CharacterFovController__Class>(type_info, "", "CharacterFovController");
        }
        inline app::CharacterFovController* create() {
            return il2cpp::create_object<app::CharacterFovController>(get_class());
        }
    } // namespace CharacterFovController
} // namespace app::classes::types
