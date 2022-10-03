#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharPtr {
        namespace {
            app::CharPtr__Class* type_info_ref = nullptr;
        }
        app::CharPtr__Class** type_info = &type_info_ref;
        inline app::CharPtr__Class* get_class() {
            return il2cpp::get_class<app::CharPtr__Class>(type_info, "System", "Char*");
        }
        inline app::CharPtr* create() {
            return il2cpp::create_object<app::CharPtr>(get_class());
        }
    } // namespace CharPtr
} // namespace app::classes::types
