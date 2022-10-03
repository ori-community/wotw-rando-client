#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplicationQuit_1 {
        namespace {
            app::ApplicationQuit_1__Class* type_info_ref = nullptr;
        }
        app::ApplicationQuit_1__Class** type_info = &type_info_ref;
        inline app::ApplicationQuit_1__Class* get_class() {
            return il2cpp::get_class<app::ApplicationQuit_1__Class>(type_info, "", "ApplicationQuit");
        }
        inline app::ApplicationQuit_1* create() {
            return il2cpp::create_object<app::ApplicationQuit_1>(get_class());
        }
    } // namespace ApplicationQuit_1
} // namespace app::classes::types
