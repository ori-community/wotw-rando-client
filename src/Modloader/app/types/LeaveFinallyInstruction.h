#pragma once
#include <Modloader/app/structs/LeaveFinallyInstruction.h>
#include <Modloader/app/structs/LeaveFinallyInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaveFinallyInstruction {
        inline app::LeaveFinallyInstruction__Class** type_info() {
            static app::LeaveFinallyInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaveFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478BF08));
            }
            return cache;
        }
        inline app::LeaveFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveFinallyInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LeaveFinallyInstruction");
        }
        inline app::LeaveFinallyInstruction* create() {
            return il2cpp::create_object<app::LeaveFinallyInstruction>(get_class());
        }
    } // namespace LeaveFinallyInstruction
} // namespace app::classes::types
