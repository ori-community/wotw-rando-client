#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LetterboxAction {
        namespace {
            inline app::LetterboxAction__Class* type_info_ref = nullptr;
        }
        inline app::LetterboxAction__Class** type_info = &type_info_ref;
        inline app::LetterboxAction__Class* get_class() {
            return il2cpp::get_class<app::LetterboxAction__Class>(type_info, "", "LetterboxAction");
        }
        inline app::LetterboxAction* create() {
            return il2cpp::create_object<app::LetterboxAction>(get_class());
        }
    } // namespace LetterboxAction
} // namespace app::classes::types
