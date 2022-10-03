#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelRaceAction {
        namespace {
            app::CancelRaceAction__Class* type_info_ref = nullptr;
        }
        app::CancelRaceAction__Class** type_info = &type_info_ref;
        inline app::CancelRaceAction__Class* get_class() {
            return il2cpp::get_class<app::CancelRaceAction__Class>(type_info, "", "CancelRaceAction");
        }
        inline app::CancelRaceAction* create() {
            return il2cpp::create_object<app::CancelRaceAction>(get_class());
        }
    } // namespace CancelRaceAction
} // namespace app::classes::types
