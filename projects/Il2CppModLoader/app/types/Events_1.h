#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Events_1 {
        namespace {
            app::Events_1__Class* type_info_ref = nullptr;
        }
        app::Events_1__Class** type_info = &type_info_ref;
        inline app::Events_1__Class* get_class() {
            return il2cpp::get_class<app::Events_1__Class>(type_info, "Game", "Events");
        }
        inline app::Events_1* create() {
            return il2cpp::create_object<app::Events_1>(get_class());
        }
    } // namespace Events_1
} // namespace app::classes::types
