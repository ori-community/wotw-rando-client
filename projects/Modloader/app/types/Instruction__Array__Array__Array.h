#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Instruction__Array__Array__Array {
        inline app::Instruction__Array__Array__Array__Class** type_info = (app::Instruction__Array__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04762590));
        inline app::Instruction__Array__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Instruction__Array__Array__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "Instruction[][][]");
        }
        inline app::Instruction__Array__Array__Array* create() {
            return il2cpp::create_object<app::Instruction__Array__Array__Array>(get_class());
        }
    } // namespace Instruction__Array__Array__Array
} // namespace app::classes::types
