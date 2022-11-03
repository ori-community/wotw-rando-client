#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction {
        inline app::GreaterThanOrEqualInstruction__Class** type_info = (app::GreaterThanOrEqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x04756DE8));
        inline app::GreaterThanOrEqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::GreaterThanOrEqualInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction");
        }
        inline app::GreaterThanOrEqualInstruction* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction
} // namespace app::classes::types
