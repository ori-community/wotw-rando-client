#pragma once
#include <Modloader/app/structs/RightShiftInstruction_RightShiftUInt32.h>
#include <Modloader/app/structs/RightShiftInstruction_RightShiftUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftUInt32 {
        inline app::RightShiftInstruction_RightShiftUInt32__Class** type_info() {
            static app::RightShiftInstruction_RightShiftUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RightShiftInstruction_RightShiftUInt32__Class**)(modloader::win::memory::resolve_rva(0x047018C0));
            }
            return cache;
        }
        inline app::RightShiftInstruction_RightShiftUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftUInt32");
        }
        inline app::RightShiftInstruction_RightShiftUInt32* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftUInt32>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftUInt32
} // namespace app::classes::types
