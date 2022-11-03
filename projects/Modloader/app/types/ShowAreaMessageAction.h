#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowAreaMessageAction {
        namespace {
            inline app::ShowAreaMessageAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowAreaMessageAction__Class** type_info = &type_info_ref;
        inline app::ShowAreaMessageAction__Class* get_class() {
            return il2cpp::get_class<app::ShowAreaMessageAction__Class>(type_info, "", "ShowAreaMessageAction");
        }
        inline app::ShowAreaMessageAction* create() {
            return il2cpp::create_object<app::ShowAreaMessageAction>(get_class());
        }
    } // namespace ShowAreaMessageAction
} // namespace app::classes::types
