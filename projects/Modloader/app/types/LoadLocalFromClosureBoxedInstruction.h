#pragma once
#include <Modloader/app/structs/LoadLocalFromClosureBoxedInstruction.h>
#include <Modloader/app/structs/LoadLocalFromClosureBoxedInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadLocalFromClosureBoxedInstruction {
        inline app::LoadLocalFromClosureBoxedInstruction__Class** type_info() {
            static app::LoadLocalFromClosureBoxedInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadLocalFromClosureBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04716160));
            }
            return cache;
        }
        inline app::LoadLocalFromClosureBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalFromClosureBoxedInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LoadLocalFromClosureBoxedInstruction");
        }
        inline app::LoadLocalFromClosureBoxedInstruction* create() {
            return il2cpp::create_object<app::LoadLocalFromClosureBoxedInstruction>(get_class());
        }
    } // namespace LoadLocalFromClosureBoxedInstruction
} // namespace app::classes::types
