#pragma once
#include <Modloader/app/structs/ThrowInstruction.h>
#include <Modloader/app/structs/ThrowInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThrowInstruction {
        inline app::ThrowInstruction__Class** type_info() {
            static app::ThrowInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThrowInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476FE30));
            }
            return cache;
        }
        inline app::ThrowInstruction__Class* get_class() {
            return il2cpp::get_class<app::ThrowInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ThrowInstruction");
        }
        inline app::ThrowInstruction* create() {
            return il2cpp::create_object<app::ThrowInstruction>(get_class());
        }
    } // namespace ThrowInstruction
} // namespace app::classes::types
