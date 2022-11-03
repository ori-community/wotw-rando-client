#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringSwitchInstruction {
        inline app::StringSwitchInstruction__Class** type_info = (app::StringSwitchInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478EB18));
        inline app::StringSwitchInstruction__Class* get_class() {
            return il2cpp::get_class<app::StringSwitchInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "StringSwitchInstruction");
        }
        inline app::StringSwitchInstruction* create() {
            return il2cpp::create_object<app::StringSwitchInstruction>(get_class());
        }
    } // namespace StringSwitchInstruction
} // namespace app::classes::types
