#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpGridEntry_CellTag__Enum {
        namespace {
            inline app::JumpGridEntry_CellTag__Enum__Class* type_info_ref = nullptr;
        }
        inline app::JumpGridEntry_CellTag__Enum__Class** type_info = &type_info_ref;
        inline app::JumpGridEntry_CellTag__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpGridEntry_CellTag__Enum__Class>(type_info, "", "JumpGridEntry", "CellTag");
        }
        inline app::JumpGridEntry_CellTag__Enum* create() {
            return il2cpp::create_object<app::JumpGridEntry_CellTag__Enum>(get_class());
        }
        inline app::JumpGridEntry_CellTag__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::JumpGridEntry_CellTag__Enum__Array>(get_class(), size);
        }
        inline app::JumpGridEntry_CellTag__Enum__Array* create_array(const std::vector<app::JumpGridEntry_CellTag__Enum*>& items) {
            return il2cpp::array_new<app::JumpGridEntry_CellTag__Enum__Array>(get_class(), items);
        }
    } // namespace JumpGridEntry_CellTag__Enum
} // namespace app::classes::types
