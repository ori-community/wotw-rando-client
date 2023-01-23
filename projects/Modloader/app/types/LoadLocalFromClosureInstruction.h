#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadLocalFromClosureInstruction__Class.h>
#include <Modloader/app/structs/LoadLocalFromClosureInstruction.h>

namespace app::classes::types {
    namespace LoadLocalFromClosureInstruction {
        inline app::LoadLocalFromClosureInstruction__Class** type_info = (app::LoadLocalFromClosureInstruction__Class**)(modloader::win::memory::resolve_rva(0x0479A2D0));
        inline app::LoadLocalFromClosureInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalFromClosureInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadLocalFromClosureInstruction");
        }
        inline app::LoadLocalFromClosureInstruction* create() {
            return il2cpp::create_object<app::LoadLocalFromClosureInstruction>(get_class());
        }
    } // namespace LoadLocalFromClosureInstruction
} // namespace app::classes::types
