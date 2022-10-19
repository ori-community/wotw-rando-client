#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkipCreditsAction {
        namespace {
            inline app::SkipCreditsAction__Class* type_info_ref = nullptr;
        }
        inline app::SkipCreditsAction__Class** type_info = &type_info_ref;
        inline app::SkipCreditsAction__Class* get_class() {
            return il2cpp::get_class<app::SkipCreditsAction__Class>(type_info, "", "SkipCreditsAction");
        }
        inline app::SkipCreditsAction* create() {
            return il2cpp::create_object<app::SkipCreditsAction>(get_class());
        }
    } // namespace SkipCreditsAction
} // namespace app::classes::types
