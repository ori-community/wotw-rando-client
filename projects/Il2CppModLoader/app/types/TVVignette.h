#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TVVignette {
        namespace {
            app::TVVignette__Class* type_info_ref = nullptr;
        }
        app::TVVignette__Class** type_info = &type_info_ref;
        inline app::TVVignette__Class* get_class() {
            return il2cpp::get_class<app::TVVignette__Class>(type_info, "Colorful", "TVVignette");
        }
        inline app::TVVignette* create() {
            return il2cpp::create_object<app::TVVignette>(get_class());
        }
    } // namespace TVVignette
} // namespace app::classes::types
