#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewArrayInstruction {
        inline app::NewArrayInstruction__Class** type_info = (app::NewArrayInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476B9C0));
        inline app::NewArrayInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NewArrayInstruction");
        }
        inline app::NewArrayInstruction* create() {
            return il2cpp::create_object<app::NewArrayInstruction>(get_class());
        }
    } // namespace NewArrayInstruction
} // namespace app::classes::types
