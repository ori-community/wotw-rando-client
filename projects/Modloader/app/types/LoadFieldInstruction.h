#pragma once
#include <Modloader/app/structs/LoadFieldInstruction.h>
#include <Modloader/app/structs/LoadFieldInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadFieldInstruction {
        inline app::LoadFieldInstruction__Class** type_info() {
            static app::LoadFieldInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x04778A70));
            }
            return cache;
        }
        inline app::LoadFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadFieldInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LoadFieldInstruction");
        }
        inline app::LoadFieldInstruction* create() {
            return il2cpp::create_object<app::LoadFieldInstruction>(get_class());
        }
    } // namespace LoadFieldInstruction
} // namespace app::classes::types
