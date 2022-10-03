#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugLogAction {
        namespace {
            app::DebugLogAction__Class* type_info_ref = nullptr;
        }
        app::DebugLogAction__Class** type_info = &type_info_ref;
        inline app::DebugLogAction__Class* get_class() {
            return il2cpp::get_class<app::DebugLogAction__Class>(type_info, "", "DebugLogAction");
        }
        inline app::DebugLogAction* create() {
            return il2cpp::create_object<app::DebugLogAction>(get_class());
        }
    } // namespace DebugLogAction
} // namespace app::classes::types
