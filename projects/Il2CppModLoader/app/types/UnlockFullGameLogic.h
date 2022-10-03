#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockFullGameLogic {
        namespace {
            app::UnlockFullGameLogic__Class* type_info_ref = nullptr;
        }
        app::UnlockFullGameLogic__Class** type_info = &type_info_ref;
        inline app::UnlockFullGameLogic__Class* get_class() {
            return il2cpp::get_class<app::UnlockFullGameLogic__Class>(type_info, "", "UnlockFullGameLogic");
        }
        inline app::UnlockFullGameLogic* create() {
            return il2cpp::create_object<app::UnlockFullGameLogic>(get_class());
        }
    } // namespace UnlockFullGameLogic
} // namespace app::classes::types
