#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubOvfInstruction {
        inline app::SubOvfInstruction__Class** type_info = (app::SubOvfInstruction__Class**)(modloader::win::memory::resolve_rva(0x047776F8));
        inline app::SubOvfInstruction__Class* get_class() {
            return il2cpp::get_class<app::SubOvfInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubOvfInstruction");
        }
        inline app::SubOvfInstruction* create() {
            return il2cpp::create_object<app::SubOvfInstruction>(get_class());
        }
    } // namespace SubOvfInstruction
} // namespace app::classes::types
