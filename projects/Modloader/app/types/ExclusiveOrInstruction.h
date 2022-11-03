#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction {
        inline app::ExclusiveOrInstruction__Class** type_info = (app::ExclusiveOrInstruction__Class**)(modloader::win::memory::resolve_rva(0x047653A8));
        inline app::ExclusiveOrInstruction__Class* get_class() {
            return il2cpp::get_class<app::ExclusiveOrInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction");
        }
        inline app::ExclusiveOrInstruction* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction>(get_class());
        }
    } // namespace ExclusiveOrInstruction
} // namespace app::classes::types
