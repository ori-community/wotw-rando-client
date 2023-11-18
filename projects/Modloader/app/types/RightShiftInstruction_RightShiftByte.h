#pragma once
#include <Modloader/app/structs/RightShiftInstruction_RightShiftByte.h>
#include <Modloader/app/structs/RightShiftInstruction_RightShiftByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftByte {
        inline app::RightShiftInstruction_RightShiftByte__Class** type_info() {
            static app::RightShiftInstruction_RightShiftByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RightShiftInstruction_RightShiftByte__Class**)(modloader::win::memory::resolve_rva(0x04725630));
            }
            return cache;
        }
        inline app::RightShiftInstruction_RightShiftByte__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftByte");
        }
        inline app::RightShiftInstruction_RightShiftByte* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftByte>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftByte
} // namespace app::classes::types
