#pragma once
#include <Modloader/app/structs/SetArrayItemInstruction.h>
#include <Modloader/app/structs/SetArrayItemInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetArrayItemInstruction {
        inline app::SetArrayItemInstruction__Class** type_info() {
            static app::SetArrayItemInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetArrayItemInstruction__Class**)(modloader::win::memory::resolve_rva(0x04704F50));
            }
            return cache;
        }
        inline app::SetArrayItemInstruction__Class* get_class() {
            return il2cpp::get_class<app::SetArrayItemInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "SetArrayItemInstruction");
        }
        inline app::SetArrayItemInstruction* create() {
            return il2cpp::create_object<app::SetArrayItemInstruction>(get_class());
        }
    } // namespace SetArrayItemInstruction
} // namespace app::classes::types
