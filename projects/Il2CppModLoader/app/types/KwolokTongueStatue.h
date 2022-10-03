#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue {
        namespace {
            app::KwolokTongueStatue__Class* type_info_ref = nullptr;
        }
        app::KwolokTongueStatue__Class** type_info = &type_info_ref;
        inline app::KwolokTongueStatue__Class* get_class() {
            return il2cpp::get_class<app::KwolokTongueStatue__Class>(type_info, "", "KwolokTongueStatue");
        }
        inline app::KwolokTongueStatue* create() {
            return il2cpp::create_object<app::KwolokTongueStatue>(get_class());
        }
    } // namespace KwolokTongueStatue
} // namespace app::classes::types
