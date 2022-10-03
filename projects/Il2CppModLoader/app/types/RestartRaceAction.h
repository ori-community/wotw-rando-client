#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestartRaceAction {
        namespace {
            app::RestartRaceAction__Class* type_info_ref = nullptr;
        }
        app::RestartRaceAction__Class** type_info = &type_info_ref;
        inline app::RestartRaceAction__Class* get_class() {
            return il2cpp::get_class<app::RestartRaceAction__Class>(type_info, "", "RestartRaceAction");
        }
        inline app::RestartRaceAction* create() {
            return il2cpp::create_object<app::RestartRaceAction>(get_class());
        }
    } // namespace RestartRaceAction
} // namespace app::classes::types
