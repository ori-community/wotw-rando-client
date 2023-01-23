#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArrayLengthInstruction__Class.h>
#include <Modloader/app/structs/ArrayLengthInstruction.h>

namespace app::classes::types {
    namespace ArrayLengthInstruction {
        inline app::ArrayLengthInstruction__Class** type_info = (app::ArrayLengthInstruction__Class**)(modloader::win::memory::resolve_rva(0x04744FE0));
        inline app::ArrayLengthInstruction__Class* get_class() {
            return il2cpp::get_class<app::ArrayLengthInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ArrayLengthInstruction");
        }
        inline app::ArrayLengthInstruction* create() {
            return il2cpp::create_object<app::ArrayLengthInstruction>(get_class());
        }
    } // namespace ArrayLengthInstruction
} // namespace app::classes::types
