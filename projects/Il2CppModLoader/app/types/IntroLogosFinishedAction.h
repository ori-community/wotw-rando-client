#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntroLogosFinishedAction {
        namespace {
            app::IntroLogosFinishedAction__Class* type_info_ref = nullptr;
        }
        app::IntroLogosFinishedAction__Class** type_info = &type_info_ref;
        inline app::IntroLogosFinishedAction__Class* get_class() {
            return il2cpp::get_class<app::IntroLogosFinishedAction__Class>(type_info, "", "IntroLogosFinishedAction");
        }
        inline app::IntroLogosFinishedAction* create() {
            return il2cpp::create_object<app::IntroLogosFinishedAction>(get_class());
        }
    } // namespace IntroLogosFinishedAction
} // namespace app::classes::types
