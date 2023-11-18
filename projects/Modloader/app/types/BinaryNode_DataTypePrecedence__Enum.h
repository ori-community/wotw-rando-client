#pragma once
#include <Modloader/app/structs/BinaryNode_DataTypePrecedence__Enum.h>
#include <Modloader/app/structs/BinaryNode_DataTypePrecedence__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryNode_DataTypePrecedence__Enum {
        inline app::BinaryNode_DataTypePrecedence__Enum__Class** type_info() {
            static app::BinaryNode_DataTypePrecedence__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BinaryNode_DataTypePrecedence__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BinaryNode_DataTypePrecedence__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BinaryNode_DataTypePrecedence__Enum__Class>(type_info(), "System.Data", "BinaryNode", "DataTypePrecedence");
        }
        inline app::BinaryNode_DataTypePrecedence__Enum* create() {
            return il2cpp::create_object<app::BinaryNode_DataTypePrecedence__Enum>(get_class());
        }
    } // namespace BinaryNode_DataTypePrecedence__Enum
} // namespace app::classes::types
