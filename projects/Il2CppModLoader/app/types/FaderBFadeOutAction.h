#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FaderBFadeOutAction {
        namespace {
            app::FaderBFadeOutAction__Class* type_info_ref = nullptr;
        }
        app::FaderBFadeOutAction__Class** type_info = &type_info_ref;
        inline app::FaderBFadeOutAction__Class* get_class() {
            return il2cpp::get_class<app::FaderBFadeOutAction__Class>(type_info, "", "FaderBFadeOutAction");
        }
        inline app::FaderBFadeOutAction* create() {
            return il2cpp::create_object<app::FaderBFadeOutAction>(get_class());
        }
    } // namespace FaderBFadeOutAction
} // namespace app::classes::types
