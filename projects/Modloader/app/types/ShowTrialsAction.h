#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowTrialsAction {
        namespace {
            inline app::ShowTrialsAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowTrialsAction__Class** type_info = &type_info_ref;
        inline app::ShowTrialsAction__Class* get_class() {
            return il2cpp::get_class<app::ShowTrialsAction__Class>(type_info, "", "ShowTrialsAction");
        }
        inline app::ShowTrialsAction* create() {
            return il2cpp::create_object<app::ShowTrialsAction>(get_class());
        }
    } // namespace ShowTrialsAction
} // namespace app::classes::types
