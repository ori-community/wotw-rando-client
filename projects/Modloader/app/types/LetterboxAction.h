#pragma once
#include <Modloader/app/structs/LetterboxAction.h>
#include <Modloader/app/structs/LetterboxAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LetterboxAction {
        inline app::LetterboxAction__Class** type_info() {
            static app::LetterboxAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LetterboxAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LetterboxAction__Class* get_class() {
            return il2cpp::get_class<app::LetterboxAction__Class>(type_info(), "", "LetterboxAction");
        }
        inline app::LetterboxAction* create() {
            return il2cpp::create_object<app::LetterboxAction>(get_class());
        }
    } // namespace LetterboxAction
} // namespace app::classes::types
