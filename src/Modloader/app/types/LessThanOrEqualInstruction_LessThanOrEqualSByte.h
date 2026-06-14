#pragma once
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualSByte.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualSByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualSByte {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class** type_info() {
            static app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class**)(modloader::win::memory::resolve_rva(0x047546F0));
            }
            return cache;
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualSByte");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSByte* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualSByte>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualSByte
} // namespace app::classes::types
