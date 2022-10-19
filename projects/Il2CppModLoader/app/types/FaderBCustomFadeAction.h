#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FaderBCustomFadeAction {
        namespace {
            inline app::FaderBCustomFadeAction__Class* type_info_ref = nullptr;
        }
        inline app::FaderBCustomFadeAction__Class** type_info = &type_info_ref;
        inline app::FaderBCustomFadeAction__Class* get_class() {
            return il2cpp::get_class<app::FaderBCustomFadeAction__Class>(type_info, "", "FaderBCustomFadeAction");
        }
        inline app::FaderBCustomFadeAction* create() {
            return il2cpp::create_object<app::FaderBCustomFadeAction>(get_class());
        }
    } // namespace FaderBCustomFadeAction
} // namespace app::classes::types
