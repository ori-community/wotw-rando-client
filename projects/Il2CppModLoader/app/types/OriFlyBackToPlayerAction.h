#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriFlyBackToPlayerAction {
        namespace {
            inline app::OriFlyBackToPlayerAction__Class* type_info_ref = nullptr;
        }
        inline app::OriFlyBackToPlayerAction__Class** type_info = &type_info_ref;
        inline app::OriFlyBackToPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::OriFlyBackToPlayerAction__Class>(type_info, "", "OriFlyBackToPlayerAction");
        }
        inline app::OriFlyBackToPlayerAction* create() {
            return il2cpp::create_object<app::OriFlyBackToPlayerAction>(get_class());
        }
    } // namespace OriFlyBackToPlayerAction
} // namespace app::classes::types
