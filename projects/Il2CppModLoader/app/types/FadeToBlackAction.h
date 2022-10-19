#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FadeToBlackAction {
        namespace {
            inline app::FadeToBlackAction__Class* type_info_ref = nullptr;
        }
        inline app::FadeToBlackAction__Class** type_info = &type_info_ref;
        inline app::FadeToBlackAction__Class* get_class() {
            return il2cpp::get_class<app::FadeToBlackAction__Class>(type_info, "", "FadeToBlackAction");
        }
        inline app::FadeToBlackAction* create() {
            return il2cpp::create_object<app::FadeToBlackAction>(get_class());
        }
    } // namespace FadeToBlackAction
} // namespace app::classes::types
