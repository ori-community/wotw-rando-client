#pragma once
#include <Modloader/app/structs/LoadLocalBoxedInstruction.h>
#include <Modloader/app/structs/LoadLocalBoxedInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadLocalBoxedInstruction {
        inline app::LoadLocalBoxedInstruction__Class** type_info() {
            static app::LoadLocalBoxedInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadLocalBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04720A38));
            }
            return cache;
        }
        inline app::LoadLocalBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadLocalBoxedInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LoadLocalBoxedInstruction");
        }
        inline app::LoadLocalBoxedInstruction* create() {
            return il2cpp::create_object<app::LoadLocalBoxedInstruction>(get_class());
        }
    } // namespace LoadLocalBoxedInstruction
} // namespace app::classes::types
