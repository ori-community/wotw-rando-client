#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadLocalInstruction__Class.h>
#include <Modloader/app/structs/LoadLocalInstruction.h>

namespace app::classes::types {
    namespace LoadLocalInstruction {
        inline app::LoadLocalInstruction__Class** type_info = (app::LoadLocalInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478C590));
        inline app::LoadLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadLocalInstruction");
        }
        inline app::LoadLocalInstruction* create() {
            return il2cpp::create_object<app::LoadLocalInstruction>(get_class());
        }
    } // namespace LoadLocalInstruction
} // namespace app::classes::types
