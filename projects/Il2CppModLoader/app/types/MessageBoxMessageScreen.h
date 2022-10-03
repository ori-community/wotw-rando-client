#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageBoxMessageScreen {
        namespace {
            app::MessageBoxMessageScreen__Class* type_info_ref = nullptr;
        }
        app::MessageBoxMessageScreen__Class** type_info = &type_info_ref;
        inline app::MessageBoxMessageScreen__Class* get_class() {
            return il2cpp::get_class<app::MessageBoxMessageScreen__Class>(type_info, "", "MessageBoxMessageScreen");
        }
        inline app::MessageBoxMessageScreen* create() {
            return il2cpp::create_object<app::MessageBoxMessageScreen>(get_class());
        }
    } // namespace MessageBoxMessageScreen
} // namespace app::classes::types
