#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GotoInstruction__Array__Class.h>
#include <Modloader/app/structs/GotoInstruction__Array.h>

namespace app::classes::types {
    namespace GotoInstruction__Array {
        inline app::GotoInstruction__Array__Class** type_info = (app::GotoInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x047538E8));
        inline app::GotoInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::GotoInstruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "GotoInstruction[]");
        }
        inline app::GotoInstruction__Array* create() {
            return il2cpp::create_object<app::GotoInstruction__Array>(get_class());
        }
    } // namespace GotoInstruction__Array
} // namespace app::classes::types
