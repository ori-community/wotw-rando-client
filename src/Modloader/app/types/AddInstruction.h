#pragma once
#include <Modloader/app/structs/AddInstruction.h>
#include <Modloader/app/structs/AddInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddInstruction {
        inline app::AddInstruction__Class** type_info() {
            static app::AddInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddInstruction__Class**)(modloader::win::memory::resolve_rva(0x04794DC8));
            }
            return cache;
        }
        inline app::AddInstruction__Class* get_class() {
            return il2cpp::get_class<app::AddInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AddInstruction");
        }
        inline app::AddInstruction* create() {
            return il2cpp::create_object<app::AddInstruction>(get_class());
        }
    } // namespace AddInstruction
} // namespace app::classes::types
