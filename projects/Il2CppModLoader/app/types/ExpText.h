#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpText {
        namespace {
            app::ExpText__Class* type_info_ref = nullptr;
        }
        app::ExpText__Class** type_info = &type_info_ref;
        inline app::ExpText__Class* get_class() {
            return il2cpp::get_class<app::ExpText__Class>(type_info, "", "ExpText");
        }
        inline app::ExpText* create() {
            return il2cpp::create_object<app::ExpText>(get_class());
        }
    } // namespace ExpText
} // namespace app::classes::types
