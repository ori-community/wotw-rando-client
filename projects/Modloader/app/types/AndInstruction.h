#pragma once
#include <Modloader/app/structs/AndInstruction.h>
#include <Modloader/app/structs/AndInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndInstruction {
        inline app::AndInstruction__Class** type_info() {
            static app::AndInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndInstruction__Class**)(modloader::win::memory::resolve_rva(0x04721D50));
            }
            return cache;
        }
        inline app::AndInstruction__Class* get_class() {
            return il2cpp::get_class<app::AndInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AndInstruction");
        }
        inline app::AndInstruction* create() {
            return il2cpp::create_object<app::AndInstruction>(get_class());
        }
    } // namespace AndInstruction
} // namespace app::classes::types
