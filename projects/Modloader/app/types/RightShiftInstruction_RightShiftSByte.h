#pragma once
#include <Modloader/app/structs/RightShiftInstruction_RightShiftSByte.h>
#include <Modloader/app/structs/RightShiftInstruction_RightShiftSByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftSByte {
        inline app::RightShiftInstruction_RightShiftSByte__Class** type_info() {
            static app::RightShiftInstruction_RightShiftSByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RightShiftInstruction_RightShiftSByte__Class**)(modloader::win::memory::resolve_rva(0x04754B98));
            }
            return cache;
        }
        inline app::RightShiftInstruction_RightShiftSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftSByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftSByte");
        }
        inline app::RightShiftInstruction_RightShiftSByte* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftSByte>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftSByte
} // namespace app::classes::types
