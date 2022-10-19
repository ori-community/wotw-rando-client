#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Utility_MoveDirection__Enum {
        namespace {
            inline app::Utility_MoveDirection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Utility_MoveDirection__Enum__Class** type_info = &type_info_ref;
        inline app::Utility_MoveDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Utility_MoveDirection__Enum__Class>(type_info, "", "Utility", "MoveDirection");
        }
        inline app::Utility_MoveDirection__Enum* create() {
            return il2cpp::create_object<app::Utility_MoveDirection__Enum>(get_class());
        }
    } // namespace Utility_MoveDirection__Enum
} // namespace app::classes::types
