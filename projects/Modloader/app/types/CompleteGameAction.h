#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompleteGameAction {
        namespace {
            inline app::CompleteGameAction__Class* type_info_ref = nullptr;
        }
        inline app::CompleteGameAction__Class** type_info = &type_info_ref;
        inline app::CompleteGameAction__Class* get_class() {
            return il2cpp::get_class<app::CompleteGameAction__Class>(type_info, "", "CompleteGameAction");
        }
        inline app::CompleteGameAction* create() {
            return il2cpp::create_object<app::CompleteGameAction>(get_class());
        }
    } // namespace CompleteGameAction
} // namespace app::classes::types
