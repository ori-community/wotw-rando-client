#pragma once
#include <Modloader/app/structs/NegateInstruction.h>
#include <Modloader/app/structs/NegateInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction {
        inline app::NegateInstruction__Class** type_info() {
            static app::NegateInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegateInstruction__Class**)(modloader::win::memory::resolve_rva(0x04778010));
            }
            return cache;
        }
        inline app::NegateInstruction__Class* get_class() {
            return il2cpp::get_class<app::NegateInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NegateInstruction");
        }
        inline app::NegateInstruction* create() {
            return il2cpp::create_object<app::NegateInstruction>(get_class());
        }
    } // namespace NegateInstruction
} // namespace app::classes::types
