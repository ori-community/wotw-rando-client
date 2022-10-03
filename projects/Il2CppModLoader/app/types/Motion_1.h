#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Motion_1 {
        namespace {
            app::Motion_1__Class* type_info_ref = nullptr;
        }
        app::Motion_1__Class** type_info = &type_info_ref;
        inline app::Motion_1__Class* get_class() {
            return il2cpp::get_class<app::Motion_1__Class>(type_info, "Kino", "Motion");
        }
        inline app::Motion_1* create() {
            return il2cpp::create_object<app::Motion_1>(get_class());
        }
    } // namespace Motion_1
} // namespace app::classes::types
