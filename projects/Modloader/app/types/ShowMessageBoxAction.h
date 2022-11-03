#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowMessageBoxAction {
        namespace {
            inline app::ShowMessageBoxAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowMessageBoxAction__Class** type_info = &type_info_ref;
        inline app::ShowMessageBoxAction__Class* get_class() {
            return il2cpp::get_class<app::ShowMessageBoxAction__Class>(type_info, "", "ShowMessageBoxAction");
        }
        inline app::ShowMessageBoxAction* create() {
            return il2cpp::create_object<app::ShowMessageBoxAction>(get_class());
        }
    } // namespace ShowMessageBoxAction
} // namespace app::classes::types
