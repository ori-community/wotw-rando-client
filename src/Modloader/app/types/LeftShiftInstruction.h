#pragma once
#include <Modloader/app/structs/LeftShiftInstruction.h>
#include <Modloader/app/structs/LeftShiftInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction {
        inline app::LeftShiftInstruction__Class** type_info() {
            static app::LeftShiftInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeftShiftInstruction__Class**)(modloader::win::memory::resolve_rva(0x04751158));
            }
            return cache;
        }
        inline app::LeftShiftInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeftShiftInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LeftShiftInstruction");
        }
        inline app::LeftShiftInstruction* create() {
            return il2cpp::create_object<app::LeftShiftInstruction>(get_class());
        }
    } // namespace LeftShiftInstruction
} // namespace app::classes::types
