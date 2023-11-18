#pragma once
#include <Modloader/app/structs/DefaultValueInstruction.h>
#include <Modloader/app/structs/DefaultValueInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultValueInstruction {
        inline app::DefaultValueInstruction__Class** type_info() {
            static app::DefaultValueInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultValueInstruction__Class**)(modloader::win::memory::resolve_rva(0x04722350));
            }
            return cache;
        }
        inline app::DefaultValueInstruction__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DefaultValueInstruction");
        }
        inline app::DefaultValueInstruction* create() {
            return il2cpp::create_object<app::DefaultValueInstruction>(get_class());
        }
    } // namespace DefaultValueInstruction
} // namespace app::classes::types
