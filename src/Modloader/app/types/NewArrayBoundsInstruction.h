#pragma once
#include <Modloader/app/structs/NewArrayBoundsInstruction.h>
#include <Modloader/app/structs/NewArrayBoundsInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewArrayBoundsInstruction {
        inline app::NewArrayBoundsInstruction__Class** type_info() {
            static app::NewArrayBoundsInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewArrayBoundsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04761080));
            }
            return cache;
        }
        inline app::NewArrayBoundsInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayBoundsInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NewArrayBoundsInstruction");
        }
        inline app::NewArrayBoundsInstruction* create() {
            return il2cpp::create_object<app::NewArrayBoundsInstruction>(get_class());
        }
    } // namespace NewArrayBoundsInstruction
} // namespace app::classes::types
