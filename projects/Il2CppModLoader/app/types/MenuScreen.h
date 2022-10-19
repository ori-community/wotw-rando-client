#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuScreen {
        namespace {
            inline app::MenuScreen__Class* type_info_ref = nullptr;
        }
        inline app::MenuScreen__Class** type_info = &type_info_ref;
        inline app::MenuScreen__Class* get_class() {
            return il2cpp::get_class<app::MenuScreen__Class>(type_info, "", "MenuScreen");
        }
        inline app::MenuScreen* create() {
            return il2cpp::create_object<app::MenuScreen>(get_class());
        }
        inline app::MenuScreen__Array* create_array(int size) {
            return il2cpp::array_new<app::MenuScreen__Array>(get_class(), size);
        }
        inline app::MenuScreen__Array* create_array(const std::vector<app::MenuScreen*>& items) {
            return il2cpp::array_new<app::MenuScreen__Array>(get_class(), items);
        }
    } // namespace MenuScreen
} // namespace app::classes::types
