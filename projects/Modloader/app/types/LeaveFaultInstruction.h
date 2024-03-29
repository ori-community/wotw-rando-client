#pragma once
#include <Modloader/app/structs/LeaveFaultInstruction.h>
#include <Modloader/app/structs/LeaveFaultInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaveFaultInstruction {
        inline app::LeaveFaultInstruction__Class** type_info() {
            static app::LeaveFaultInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaveFaultInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F190));
            }
            return cache;
        }
        inline app::LeaveFaultInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveFaultInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LeaveFaultInstruction");
        }
        inline app::LeaveFaultInstruction* create() {
            return il2cpp::create_object<app::LeaveFaultInstruction>(get_class());
        }
    } // namespace LeaveFaultInstruction
} // namespace app::classes::types
