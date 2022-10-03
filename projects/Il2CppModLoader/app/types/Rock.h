#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rock {
        namespace {
            app::Rock__Class* type_info_ref = nullptr;
        }
        app::Rock__Class** type_info = &type_info_ref;
        inline app::Rock__Class* get_class() {
            return il2cpp::get_class<app::Rock__Class>(type_info, "", "Rock");
        }
        inline app::Rock* create() {
            return il2cpp::create_object<app::Rock>(get_class());
        }
    } // namespace Rock
} // namespace app::classes::types
