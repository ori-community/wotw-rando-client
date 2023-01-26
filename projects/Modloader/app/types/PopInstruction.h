#pragma once
#include <Modloader/app/structs/PopInstruction.h>
#include <Modloader/app/structs/PopInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PopInstruction {
        inline app::PopInstruction__Class** type_info() {
            static app::PopInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PopInstruction__Class**)(modloader::win::memory::resolve_rva(0x04709228));
            }
            return cache;
        }
        inline app::PopInstruction__Class* get_class() {
            return il2cpp::get_class<app::PopInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "PopInstruction");
        }
        inline app::PopInstruction* create() {
            return il2cpp::create_object<app::PopInstruction>(get_class());
        }
    } // namespace PopInstruction
} // namespace app::classes::types
