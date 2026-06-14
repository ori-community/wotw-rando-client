#pragma once
#include <Modloader/app/structs/NewArrayInitInstruction.h>
#include <Modloader/app/structs/NewArrayInitInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewArrayInitInstruction {
        inline app::NewArrayInitInstruction__Class** type_info() {
            static app::NewArrayInitInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewArrayInitInstruction__Class**)(modloader::win::memory::resolve_rva(0x04754C68));
            }
            return cache;
        }
        inline app::NewArrayInitInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayInitInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NewArrayInitInstruction");
        }
        inline app::NewArrayInitInstruction* create() {
            return il2cpp::create_object<app::NewArrayInitInstruction>(get_class());
        }
    } // namespace NewArrayInitInstruction
} // namespace app::classes::types
