#pragma once
#include <Modloader/app/structs/EqualInstruction.h>
#include <Modloader/app/structs/EqualInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction {
        inline app::EqualInstruction__Class** type_info() {
            static app::EqualInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478E7B0));
            }
            return cache;
        }
        inline app::EqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::EqualInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction");
        }
        inline app::EqualInstruction* create() {
            return il2cpp::create_object<app::EqualInstruction>(get_class());
        }
    } // namespace EqualInstruction
} // namespace app::classes::types
