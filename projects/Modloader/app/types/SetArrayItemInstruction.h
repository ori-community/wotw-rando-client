#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetArrayItemInstruction {
        inline app::SetArrayItemInstruction__Class** type_info = (app::SetArrayItemInstruction__Class**)(modloader::win::memory::resolve_rva(0x04704F50));
        inline app::SetArrayItemInstruction__Class* get_class() {
            return il2cpp::get_class<app::SetArrayItemInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "SetArrayItemInstruction");
        }
        inline app::SetArrayItemInstruction* create() {
            return il2cpp::create_object<app::SetArrayItemInstruction>(get_class());
        }
    } // namespace SetArrayItemInstruction
} // namespace app::classes::types
