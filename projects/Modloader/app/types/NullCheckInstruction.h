#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullCheckInstruction {
        inline app::NullCheckInstruction__Class** type_info = (app::NullCheckInstruction__Class**)(modloader::win::memory::resolve_rva(0x04752758));
        inline app::NullCheckInstruction__Class* get_class() {
            return il2cpp::get_class<app::NullCheckInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullCheckInstruction");
        }
        inline app::NullCheckInstruction* create() {
            return il2cpp::create_object<app::NullCheckInstruction>(get_class());
        }
    } // namespace NullCheckInstruction
} // namespace app::classes::types
