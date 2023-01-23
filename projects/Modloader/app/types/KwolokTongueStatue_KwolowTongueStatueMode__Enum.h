#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class.h>
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueMode__Enum.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_KwolowTongueStatueMode__Enum {
        namespace {
            inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_KwolowTongueStatueMode__Enum__Class>(type_info, "", "KwolokTongueStatue", "KwolowTongueStatueMode");
        }
        inline app::KwolokTongueStatue_KwolowTongueStatueMode__Enum* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_KwolowTongueStatueMode__Enum>(get_class());
        }
    } // namespace KwolokTongueStatue_KwolowTongueStatueMode__Enum
} // namespace app::classes::types
