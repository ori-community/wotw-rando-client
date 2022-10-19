#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GotoInstruction {
        inline app::GotoInstruction__Class** type_info = (app::GotoInstruction__Class**)(modloader::win::memory::resolve_rva(0x04710878));
        inline app::GotoInstruction__Class* get_class() {
            return il2cpp::get_class<app::GotoInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "GotoInstruction");
        }
        inline app::GotoInstruction* create() {
            return il2cpp::create_object<app::GotoInstruction>(get_class());
        }
        inline app::GotoInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::GotoInstruction__Array>(get_class(), size);
        }
        inline app::GotoInstruction__Array* create_array(const std::vector<app::GotoInstruction*>& items) {
            return il2cpp::array_new<app::GotoInstruction__Array>(get_class(), items);
        }
    } // namespace GotoInstruction
} // namespace app::classes::types
