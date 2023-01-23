#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NewInstruction__Class.h>
#include <Modloader/app/structs/NewInstruction.h>

namespace app::classes::types {
    namespace NewInstruction {
        inline app::NewInstruction__Class** type_info = (app::NewInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478FD78));
        inline app::NewInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NewInstruction");
        }
        inline app::NewInstruction* create() {
            return il2cpp::create_object<app::NewInstruction>(get_class());
        }
    } // namespace NewInstruction
} // namespace app::classes::types
