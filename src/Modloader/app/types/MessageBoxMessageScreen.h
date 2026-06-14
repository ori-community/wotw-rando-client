#pragma once
#include <Modloader/app/structs/MessageBoxMessageScreen.h>
#include <Modloader/app/structs/MessageBoxMessageScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageBoxMessageScreen {
        inline app::MessageBoxMessageScreen__Class** type_info() {
            static app::MessageBoxMessageScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageBoxMessageScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageBoxMessageScreen__Class* get_class() {
            return il2cpp::get_class<app::MessageBoxMessageScreen__Class>(type_info(), "", "MessageBoxMessageScreen");
        }
        inline app::MessageBoxMessageScreen* create() {
            return il2cpp::create_object<app::MessageBoxMessageScreen>(get_class());
        }
    } // namespace MessageBoxMessageScreen
} // namespace app::classes::types
