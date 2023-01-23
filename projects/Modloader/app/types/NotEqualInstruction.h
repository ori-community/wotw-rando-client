#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NotEqualInstruction__Class.h>
#include <Modloader/app/structs/NotEqualInstruction.h>

namespace app::classes::types {
    namespace NotEqualInstruction {
        inline app::NotEqualInstruction__Class** type_info = (app::NotEqualInstruction__Class**)(modloader::win::memory::resolve_rva(0x04727E88));
        inline app::NotEqualInstruction__Class* get_class() {
            return il2cpp::get_class<app::NotEqualInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction");
        }
        inline app::NotEqualInstruction* create() {
            return il2cpp::create_object<app::NotEqualInstruction>(get_class());
        }
    } // namespace NotEqualInstruction
} // namespace app::classes::types
