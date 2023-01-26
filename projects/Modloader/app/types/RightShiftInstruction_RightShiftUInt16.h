#pragma once
#include <Modloader/app/structs/RightShiftInstruction_RightShiftUInt16.h>
#include <Modloader/app/structs/RightShiftInstruction_RightShiftUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftUInt16 {
        inline app::RightShiftInstruction_RightShiftUInt16__Class** type_info() {
            static app::RightShiftInstruction_RightShiftUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RightShiftInstruction_RightShiftUInt16__Class**)(modloader::win::memory::resolve_rva(0x0474EAF0));
            }
            return cache;
        }
        inline app::RightShiftInstruction_RightShiftUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftUInt16");
        }
        inline app::RightShiftInstruction_RightShiftUInt16* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftUInt16>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftUInt16
} // namespace app::classes::types
