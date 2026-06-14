#pragma once
#include <Modloader/app/structs/TypeAsInstruction.h>
#include <Modloader/app/structs/TypeAsInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeAsInstruction {
        inline app::TypeAsInstruction__Class** type_info() {
            static app::TypeAsInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeAsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04740C88));
            }
            return cache;
        }
        inline app::TypeAsInstruction__Class* get_class() {
            return il2cpp::get_class<app::TypeAsInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "TypeAsInstruction");
        }
        inline app::TypeAsInstruction* create() {
            return il2cpp::create_object<app::TypeAsInstruction>(get_class());
        }
    } // namespace TypeAsInstruction
} // namespace app::classes::types
