#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryNode_DataTypePrecedence__Enum {
        namespace {
            inline app::BinaryNode_DataTypePrecedence__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BinaryNode_DataTypePrecedence__Enum__Class** type_info = &type_info_ref;
        inline app::BinaryNode_DataTypePrecedence__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BinaryNode_DataTypePrecedence__Enum__Class>(type_info, "System.Data", "BinaryNode", "DataTypePrecedence");
        }
        inline app::BinaryNode_DataTypePrecedence__Enum* create() {
            return il2cpp::create_object<app::BinaryNode_DataTypePrecedence__Enum>(get_class());
        }
    } // namespace BinaryNode_DataTypePrecedence__Enum
} // namespace app::classes::types
