#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ModuloInstruction {
        inline app::ModuloInstruction__Class** type_info = (app::ModuloInstruction__Class**)(modloader::win::memory::resolve_rva(0x04750408));
        inline app::ModuloInstruction__Class* get_class() {
            return il2cpp::get_class<app::ModuloInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ModuloInstruction");
        }
        inline app::ModuloInstruction* create() {
            return il2cpp::create_object<app::ModuloInstruction>(get_class());
        }
    } // namespace ModuloInstruction
} // namespace app::classes::types
