#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartBashPush {
        namespace {
            app::CartBashPush__Class* type_info_ref = nullptr;
        }
        app::CartBashPush__Class** type_info = &type_info_ref;
        inline app::CartBashPush__Class* get_class() {
            return il2cpp::get_class<app::CartBashPush__Class>(type_info, "", "CartBashPush");
        }
        inline app::CartBashPush* create() {
            return il2cpp::create_object<app::CartBashPush>(get_class());
        }
    } // namespace CartBashPush
} // namespace app::classes::types
