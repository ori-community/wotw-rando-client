#pragma once
#include <Modloader/app/structs/EnterTryFaultInstruction.h>
#include <Modloader/app/structs/EnterTryFaultInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnterTryFaultInstruction {
        inline app::EnterTryFaultInstruction__Class** type_info() {
            static app::EnterTryFaultInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnterTryFaultInstruction__Class**)(modloader::win::memory::resolve_rva(0x0474C768));
            }
            return cache;
        }
        inline app::EnterTryFaultInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterTryFaultInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EnterTryFaultInstruction");
        }
        inline app::EnterTryFaultInstruction* create() {
            return il2cpp::create_object<app::EnterTryFaultInstruction>(get_class());
        }
    } // namespace EnterTryFaultInstruction
} // namespace app::classes::types
