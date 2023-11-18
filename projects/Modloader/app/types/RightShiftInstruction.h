#pragma once
#include <Modloader/app/structs/RightShiftInstruction.h>
#include <Modloader/app/structs/RightShiftInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RightShiftInstruction {
        inline app::RightShiftInstruction__Class** type_info() {
            static app::RightShiftInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RightShiftInstruction__Class**)(modloader::win::memory::resolve_rva(0x0477D658));
            }
            return cache;
        }
        inline app::RightShiftInstruction__Class* get_class() {
            return il2cpp::get_class<app::RightShiftInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RightShiftInstruction");
        }
        inline app::RightShiftInstruction* create() {
            return il2cpp::create_object<app::RightShiftInstruction>(get_class());
        }
    } // namespace RightShiftInstruction
} // namespace app::classes::types
