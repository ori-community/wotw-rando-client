#pragma once
#include <Modloader/app/structs/LoadObjectInstruction.h>
#include <Modloader/app/structs/LoadObjectInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadObjectInstruction {
        inline app::LoadObjectInstruction__Class** type_info() {
            static app::LoadObjectInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadObjectInstruction__Class**)(modloader::win::memory::resolve_rva(0x04722720));
            }
            return cache;
        }
        inline app::LoadObjectInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadObjectInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LoadObjectInstruction");
        }
        inline app::LoadObjectInstruction* create() {
            return il2cpp::create_object<app::LoadObjectInstruction>(get_class());
        }
    } // namespace LoadObjectInstruction
} // namespace app::classes::types
