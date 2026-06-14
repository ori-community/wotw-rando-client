#pragma once
#include <Modloader/app/structs/DupInstruction.h>
#include <Modloader/app/structs/DupInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DupInstruction {
        inline app::DupInstruction__Class** type_info() {
            static app::DupInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DupInstruction__Class**)(modloader::win::memory::resolve_rva(0x047652D0));
            }
            return cache;
        }
        inline app::DupInstruction__Class* get_class() {
            return il2cpp::get_class<app::DupInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DupInstruction");
        }
        inline app::DupInstruction* create() {
            return il2cpp::create_object<app::DupInstruction>(get_class());
        }
    } // namespace DupInstruction
} // namespace app::classes::types
