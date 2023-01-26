#pragma once
#include <Modloader/app/structs/MulInstruction.h>
#include <Modloader/app/structs/MulInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulInstruction {
        inline app::MulInstruction__Class** type_info() {
            static app::MulInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulInstruction__Class**)(modloader::win::memory::resolve_rva(0x04756578));
            }
            return cache;
        }
        inline app::MulInstruction__Class* get_class() {
            return il2cpp::get_class<app::MulInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "MulInstruction");
        }
        inline app::MulInstruction* create() {
            return il2cpp::create_object<app::MulInstruction>(get_class());
        }
    } // namespace MulInstruction
} // namespace app::classes::types
