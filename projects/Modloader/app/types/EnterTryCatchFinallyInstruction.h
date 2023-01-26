#pragma once
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction.h>
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnterTryCatchFinallyInstruction {
        inline app::EnterTryCatchFinallyInstruction__Class** type_info() {
            static app::EnterTryCatchFinallyInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnterTryCatchFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x0471A098));
            }
            return cache;
        }
        inline app::EnterTryCatchFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterTryCatchFinallyInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EnterTryCatchFinallyInstruction");
        }
        inline app::EnterTryCatchFinallyInstruction* create() {
            return il2cpp::create_object<app::EnterTryCatchFinallyInstruction>(get_class());
        }
    } // namespace EnterTryCatchFinallyInstruction
} // namespace app::classes::types
