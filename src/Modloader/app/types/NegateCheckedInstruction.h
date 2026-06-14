#pragma once
#include <Modloader/app/structs/NegateCheckedInstruction.h>
#include <Modloader/app/structs/NegateCheckedInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegateCheckedInstruction {
        inline app::NegateCheckedInstruction__Class** type_info() {
            static app::NegateCheckedInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegateCheckedInstruction__Class**)(modloader::win::memory::resolve_rva(0x047993D0));
            }
            return cache;
        }
        inline app::NegateCheckedInstruction__Class* get_class() {
            return il2cpp::get_class<app::NegateCheckedInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction");
        }
        inline app::NegateCheckedInstruction* create() {
            return il2cpp::create_object<app::NegateCheckedInstruction>(get_class());
        }
    } // namespace NegateCheckedInstruction
} // namespace app::classes::types
