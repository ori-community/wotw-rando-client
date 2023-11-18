#pragma once
#include <Modloader/app/structs/NullCheckInstruction.h>
#include <Modloader/app/structs/NullCheckInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NullCheckInstruction {
        inline app::NullCheckInstruction__Class** type_info() {
            static app::NullCheckInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NullCheckInstruction__Class**)(modloader::win::memory::resolve_rva(0x04752758));
            }
            return cache;
        }
        inline app::NullCheckInstruction__Class* get_class() {
            return il2cpp::get_class<app::NullCheckInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NullCheckInstruction");
        }
        inline app::NullCheckInstruction* create() {
            return il2cpp::create_object<app::NullCheckInstruction>(get_class());
        }
    } // namespace NullCheckInstruction
} // namespace app::classes::types
