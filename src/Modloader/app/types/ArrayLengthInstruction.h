#pragma once
#include <Modloader/app/structs/ArrayLengthInstruction.h>
#include <Modloader/app/structs/ArrayLengthInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArrayLengthInstruction {
        inline app::ArrayLengthInstruction__Class** type_info() {
            static app::ArrayLengthInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArrayLengthInstruction__Class**)(modloader::win::memory::resolve_rva(0x04744FE0));
            }
            return cache;
        }
        inline app::ArrayLengthInstruction__Class* get_class() {
            return il2cpp::get_class<app::ArrayLengthInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ArrayLengthInstruction");
        }
        inline app::ArrayLengthInstruction* create() {
            return il2cpp::create_object<app::ArrayLengthInstruction>(get_class());
        }
    } // namespace ArrayLengthInstruction
} // namespace app::classes::types
