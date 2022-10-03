#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Demo2 {
        namespace {
            app::Demo2__Class* type_info_ref = nullptr;
        }
        app::Demo2__Class** type_info = &type_info_ref;
        inline app::Demo2__Class* get_class() {
            return il2cpp::get_class<app::Demo2__Class>(type_info, "BeautifyEffect", "Demo2");
        }
        inline app::Demo2* create() {
            return il2cpp::create_object<app::Demo2>(get_class());
        }
    } // namespace Demo2
} // namespace app::classes::types
