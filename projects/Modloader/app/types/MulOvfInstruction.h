#pragma once
#include <Modloader/app/structs/MulOvfInstruction.h>
#include <Modloader/app/structs/MulOvfInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulOvfInstruction {
        inline app::MulOvfInstruction__Class** type_info() {
            static app::MulOvfInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulOvfInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470B670));
            }
            return cache;
        }
        inline app::MulOvfInstruction__Class* get_class() {
            return il2cpp::get_class<app::MulOvfInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "MulOvfInstruction");
        }
        inline app::MulOvfInstruction* create() {
            return il2cpp::create_object<app::MulOvfInstruction>(get_class());
        }
    } // namespace MulOvfInstruction
} // namespace app::classes::types
