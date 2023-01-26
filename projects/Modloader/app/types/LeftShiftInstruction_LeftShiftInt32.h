#pragma once
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftInt32.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftInt32 {
        inline app::LeftShiftInstruction_LeftShiftInt32__Class** type_info() {
            static app::LeftShiftInstruction_LeftShiftInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeftShiftInstruction_LeftShiftInt32__Class**)(modloader::win::memory::resolve_rva(0x04732FB0));
            }
            return cache;
        }
        inline app::LeftShiftInstruction_LeftShiftInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftInt32");
        }
        inline app::LeftShiftInstruction_LeftShiftInt32* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftInt32>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftInt32
} // namespace app::classes::types
