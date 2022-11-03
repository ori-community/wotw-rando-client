#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowHelpAction {
        namespace {
            inline app::ShowHelpAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowHelpAction__Class** type_info = &type_info_ref;
        inline app::ShowHelpAction__Class* get_class() {
            return il2cpp::get_class<app::ShowHelpAction__Class>(type_info, "", "ShowHelpAction");
        }
        inline app::ShowHelpAction* create() {
            return il2cpp::create_object<app::ShowHelpAction>(get_class());
        }
    } // namespace ShowHelpAction
} // namespace app::classes::types
