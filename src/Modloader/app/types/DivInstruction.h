#pragma once
#include <Modloader/app/structs/DivInstruction.h>
#include <Modloader/app/structs/DivInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DivInstruction {
        inline app::DivInstruction__Class** type_info() {
            static app::DivInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DivInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F8B0));
            }
            return cache;
        }
        inline app::DivInstruction__Class* get_class() {
            return il2cpp::get_class<app::DivInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DivInstruction");
        }
        inline app::DivInstruction* create() {
            return il2cpp::create_object<app::DivInstruction>(get_class());
        }
    } // namespace DivInstruction
} // namespace app::classes::types
