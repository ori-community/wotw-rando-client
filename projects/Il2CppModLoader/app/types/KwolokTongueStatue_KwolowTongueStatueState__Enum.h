#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_KwolowTongueStatueState__Enum {
        namespace {
            app::KwolokTongueStatue_KwolowTongueStatueState__Enum__Class* type_info_ref = nullptr;
        }
        app::KwolokTongueStatue_KwolowTongueStatueState__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokTongueStatue_KwolowTongueStatueState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_KwolowTongueStatueState__Enum__Class>(type_info, "", "KwolokTongueStatue", "KwolowTongueStatueState");
        }
        inline app::KwolokTongueStatue_KwolowTongueStatueState__Enum* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_KwolowTongueStatueState__Enum>(get_class());
        }
    } // namespace KwolokTongueStatue_KwolowTongueStatueState__Enum
} // namespace app::classes::types
