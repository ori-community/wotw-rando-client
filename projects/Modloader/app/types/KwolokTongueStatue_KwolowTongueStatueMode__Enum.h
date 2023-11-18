#pragma once
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueMode__Enum.h>
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_KwolowTongueStatueMode__Enum {
        inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class** type_info() {
            static app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class>(type_info(), "", "KwolokTongueStatue", "KwolowTongueStatueMode");
        }
        inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_KwolowTongueStatueMode__Enum>(get_class());
        }
    } // namespace KwolokTongueStatue_KwolowTongueStatueMode__Enum
} // namespace app::classes::types
