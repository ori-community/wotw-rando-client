#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapScrollLimit {
        namespace {
            app::AreaMapScrollLimit__Class* type_info_ref = nullptr;
        }
        app::AreaMapScrollLimit__Class** type_info = &type_info_ref;
        inline app::AreaMapScrollLimit__Class* get_class() {
            return il2cpp::get_class<app::AreaMapScrollLimit__Class>(type_info, "", "AreaMapScrollLimit");
        }
        inline app::AreaMapScrollLimit* create() {
            return il2cpp::create_object<app::AreaMapScrollLimit>(get_class());
        }
        inline app::AreaMapScrollLimit__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapScrollLimit__Array>(get_class(), size);
        }
    } // namespace AreaMapScrollLimit
} // namespace app::classes::types
