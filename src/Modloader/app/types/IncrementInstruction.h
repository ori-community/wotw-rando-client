#pragma once
#include <Modloader/app/structs/IncrementInstruction.h>
#include <Modloader/app/structs/IncrementInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction {
        inline app::IncrementInstruction__Class** type_info() {
            static app::IncrementInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IncrementInstruction__Class**)(modloader::win::memory::resolve_rva(0x04747A18));
            }
            return cache;
        }
        inline app::IncrementInstruction__Class* get_class() {
            return il2cpp::get_class<app::IncrementInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "IncrementInstruction");
        }
        inline app::IncrementInstruction* create() {
            return il2cpp::create_object<app::IncrementInstruction>(get_class());
        }
    } // namespace IncrementInstruction
} // namespace app::classes::types
