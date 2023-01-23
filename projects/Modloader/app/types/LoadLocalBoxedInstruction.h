#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadLocalBoxedInstruction__Class.h>
#include <Modloader/app/structs/LoadLocalBoxedInstruction.h>

namespace app::classes::types {
    namespace LoadLocalBoxedInstruction {
        inline app::LoadLocalBoxedInstruction__Class** type_info = (app::LoadLocalBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04720A38));
        inline app::LoadLocalBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalBoxedInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadLocalBoxedInstruction");
        }
        inline app::LoadLocalBoxedInstruction* create() {
            return il2cpp::create_object<app::LoadLocalBoxedInstruction>(get_class());
        }
    } // namespace LoadLocalBoxedInstruction
} // namespace app::classes::types
