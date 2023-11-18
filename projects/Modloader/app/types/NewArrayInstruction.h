#pragma once
#include <Modloader/app/structs/NewArrayInstruction.h>
#include <Modloader/app/structs/NewArrayInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewArrayInstruction {
        inline app::NewArrayInstruction__Class** type_info() {
            static app::NewArrayInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewArrayInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476B9C0));
            }
            return cache;
        }
        inline app::NewArrayInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NewArrayInstruction");
        }
        inline app::NewArrayInstruction* create() {
            return il2cpp::create_object<app::NewArrayInstruction>(get_class());
        }
    } // namespace NewArrayInstruction
} // namespace app::classes::types
