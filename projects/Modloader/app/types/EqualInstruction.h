#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction {
        inline app::EqualInstruction__Class** type_info = (app::EqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478E7B0));
        inline app::EqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::EqualInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction");
        }
        inline app::EqualInstruction* create() {
            return il2cpp::create_object<app::EqualInstruction>(get_class());
        }
    } // namespace EqualInstruction
} // namespace app::classes::types
