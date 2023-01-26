#pragma once
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftUInt16.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftUInt16 {
        inline app::LeftShiftInstruction_LeftShiftUInt16__Class** type_info() {
            static app::LeftShiftInstruction_LeftShiftUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeftShiftInstruction_LeftShiftUInt16__Class**)(modloader::win::memory::resolve_rva(0x0470DE70));
            }
            return cache;
        }
        inline app::LeftShiftInstruction_LeftShiftUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftUInt16");
        }
        inline app::LeftShiftInstruction_LeftShiftUInt16* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftUInt16>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftUInt16
} // namespace app::classes::types
