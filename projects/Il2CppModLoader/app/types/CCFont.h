#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCFont {
        namespace {
            app::CCFont__Class* type_info_ref = nullptr;
        }
        app::CCFont__Class** type_info = &type_info_ref;
        inline app::CCFont__Class* get_class() {
            return il2cpp::get_class<app::CCFont__Class>(type_info, "", "CCFont");
        }
        inline app::CCFont* create() {
            return il2cpp::create_object<app::CCFont>(get_class());
        }
    } // namespace CCFont
} // namespace app::classes::types
