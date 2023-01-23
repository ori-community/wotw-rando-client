#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NotInstruction__Class.h>
#include <Modloader/app/structs/NotInstruction.h>

namespace app::classes::types {
    namespace NotInstruction {
        inline app::NotInstruction__Class** type_info = (app::NotInstruction__Class**)(modloader::win::memory::resolve_rva(0x047652C8));
        inline app::NotInstruction__Class* get_class() {
            return il2cpp::get_class<app::NotInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction");
        }
        inline app::NotInstruction* create() {
            return il2cpp::create_object<app::NotInstruction>(get_class());
        }
    } // namespace NotInstruction
} // namespace app::classes::types
