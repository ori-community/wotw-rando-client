#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadGameAction {
        namespace {
            inline app::LoadGameAction__Class* type_info_ref = nullptr;
        }
        inline app::LoadGameAction__Class** type_info = &type_info_ref;
        inline app::LoadGameAction__Class* get_class() {
            return il2cpp::get_class<app::LoadGameAction__Class>(type_info, "", "LoadGameAction");
        }
        inline app::LoadGameAction* create() {
            return il2cpp::create_object<app::LoadGameAction>(get_class());
        }
    } // namespace LoadGameAction
} // namespace app::classes::types
