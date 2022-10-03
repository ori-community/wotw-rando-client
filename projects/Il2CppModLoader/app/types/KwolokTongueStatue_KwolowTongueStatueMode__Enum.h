#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_KwolowTongueStatueMode__Enum {
        namespace {
            app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class* type_info_ref = nullptr;
        }
        app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class>(type_info, "", "KwolokTongueStatue", "KwolowTongueStatueMode");
        }
        inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_KwolowTongueStatueMode__Enum>(get_class());
        }
    } // namespace KwolokTongueStatue_KwolowTongueStatueMode__Enum
} // namespace app::classes::types
