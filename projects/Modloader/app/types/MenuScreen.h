#pragma once
#include <Modloader/app/structs/MenuScreen.h>
#include <Modloader/app/structs/MenuScreen__Array.h>
#include <Modloader/app/structs/MenuScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuScreen {
        inline app::MenuScreen__Class** type_info() {
            static app::MenuScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MenuScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MenuScreen__Class* get_class() {
            return il2cpp::get_class<app::MenuScreen__Class>(type_info(), "", "MenuScreen");
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
