#pragma once
#include <Modloader/app/structs/ExclusiveOrInstruction.h>
#include <Modloader/app/structs/ExclusiveOrInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction {
        inline app::ExclusiveOrInstruction__Class** type_info() {
            static app::ExclusiveOrInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExclusiveOrInstruction__Class**)(modloader::win::memory::resolve_rva(0x047653A8));
            }
            return cache;
        }
        inline app::ExclusiveOrInstruction__Class* get_class() {
            return il2cpp::get_class<app::ExclusiveOrInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction");
        }
        inline app::ExclusiveOrInstruction* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction>(get_class());
        }
    } // namespace ExclusiveOrInstruction
} // namespace app::classes::types
