#pragma once
#include <Modloader/app/structs/GreaterThanInstruction.h>
#include <Modloader/app/structs/GreaterThanInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction {
        inline app::GreaterThanInstruction__Class** type_info() {
            static app::GreaterThanInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanInstruction__Class**)(modloader::win::memory::resolve_rva(0x04796680));
            }
            return cache;
        }
        inline app::GreaterThanInstruction__Class* get_class() {
            return il2cpp::get_class<app::GreaterThanInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanInstruction");
        }
        inline app::GreaterThanInstruction* create() {
            return il2cpp::create_object<app::GreaterThanInstruction>(get_class());
        }
    } // namespace GreaterThanInstruction
} // namespace app::classes::types
