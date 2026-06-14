#pragma once
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftByte.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftByte {
        inline app::LeftShiftInstruction_LeftShiftByte__Class** type_info() {
            static app::LeftShiftInstruction_LeftShiftByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeftShiftInstruction_LeftShiftByte__Class**)(modloader::win::memory::resolve_rva(0x047176F0));
            }
            return cache;
        }
        inline app::LeftShiftInstruction_LeftShiftByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftByte");
        }
        inline app::LeftShiftInstruction_LeftShiftByte* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftByte>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftByte
} // namespace app::classes::types
