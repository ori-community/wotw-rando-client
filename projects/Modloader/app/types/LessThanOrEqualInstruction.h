#pragma once
#include <Modloader/app/structs/LessThanOrEqualInstruction.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction {
        inline app::LessThanOrEqualInstruction__Class** type_info() {
            static app::LessThanOrEqualInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanOrEqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x047611F8));
            }
            return cache;
        }
        inline app::LessThanOrEqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::LessThanOrEqualInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction");
        }
        inline app::LessThanOrEqualInstruction* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction>(get_class());
        }
    } // namespace LessThanOrEqualInstruction
} // namespace app::classes::types
