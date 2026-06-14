#pragma once
#include <Modloader/app/structs/DecrementInstruction.h>
#include <Modloader/app/structs/DecrementInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction {
        inline app::DecrementInstruction__Class** type_info() {
            static app::DecrementInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecrementInstruction__Class**)(modloader::win::memory::resolve_rva(0x04768ED8));
            }
            return cache;
        }
        inline app::DecrementInstruction__Class* get_class() {
            return il2cpp::get_class<app::DecrementInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DecrementInstruction");
        }
        inline app::DecrementInstruction* create() {
            return il2cpp::create_object<app::DecrementInstruction>(get_class());
        }
    } // namespace DecrementInstruction
} // namespace app::classes::types
