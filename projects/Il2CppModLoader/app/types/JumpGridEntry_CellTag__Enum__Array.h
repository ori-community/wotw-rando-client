#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpGridEntry_CellTag__Enum__Array {
        namespace {
            app::JumpGridEntry_CellTag__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::JumpGridEntry_CellTag__Enum__Array__Class** type_info = &type_info_ref;
        inline app::JumpGridEntry_CellTag__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::JumpGridEntry_CellTag__Enum__Array__Class>(type_info, "", "JumpGridEntry+CellTag[]");
        }
        inline app::JumpGridEntry_CellTag__Enum__Array* create() {
            return il2cpp::create_object<app::JumpGridEntry_CellTag__Enum__Array>(get_class());
        }
    } // namespace JumpGridEntry_CellTag__Enum__Array
} // namespace app::classes::types
