#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowPagesAction {
        namespace {
            inline app::ShowPagesAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowPagesAction__Class** type_info = &type_info_ref;
        inline app::ShowPagesAction__Class* get_class() {
            return il2cpp::get_class<app::ShowPagesAction__Class>(type_info, "", "ShowPagesAction");
        }
        inline app::ShowPagesAction* create() {
            return il2cpp::create_object<app::ShowPagesAction>(get_class());
        }
    } // namespace ShowPagesAction
} // namespace app::classes::types
