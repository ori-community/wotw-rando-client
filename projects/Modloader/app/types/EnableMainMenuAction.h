#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnableMainMenuAction {
        namespace {
            inline app::EnableMainMenuAction__Class* type_info_ref = nullptr;
        }
        inline app::EnableMainMenuAction__Class** type_info = &type_info_ref;
        inline app::EnableMainMenuAction__Class* get_class() {
            return il2cpp::get_class<app::EnableMainMenuAction__Class>(type_info, "", "EnableMainMenuAction");
        }
        inline app::EnableMainMenuAction* create() {
            return il2cpp::create_object<app::EnableMainMenuAction>(get_class());
        }
    } // namespace EnableMainMenuAction
} // namespace app::classes::types
