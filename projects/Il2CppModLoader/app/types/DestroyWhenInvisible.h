#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyWhenInvisible {
        namespace {
            app::DestroyWhenInvisible__Class* type_info_ref = nullptr;
        }
        app::DestroyWhenInvisible__Class** type_info = &type_info_ref;
        inline app::DestroyWhenInvisible__Class* get_class() {
            return il2cpp::get_class<app::DestroyWhenInvisible__Class>(type_info, "", "DestroyWhenInvisible");
        }
        inline app::DestroyWhenInvisible* create() {
            return il2cpp::create_object<app::DestroyWhenInvisible>(get_class());
        }
    } // namespace DestroyWhenInvisible
} // namespace app::classes::types
