#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LetterboxAction {
        namespace {
            app::LetterboxAction__Class* type_info_ref = nullptr;
        }
        app::LetterboxAction__Class** type_info = &type_info_ref;
        inline app::LetterboxAction__Class* get_class() {
            return il2cpp::get_class<app::LetterboxAction__Class>(type_info, "", "LetterboxAction");
        }
        inline app::LetterboxAction* create() {
            return il2cpp::create_object<app::LetterboxAction>(get_class());
        }
    } // namespace LetterboxAction
} // namespace app::classes::types
