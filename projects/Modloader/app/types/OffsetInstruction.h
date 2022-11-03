#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OffsetInstruction {
        inline app::OffsetInstruction__Class** type_info = (app::OffsetInstruction__Class**)(modloader::win::memory::resolve_rva(0x04773EA8));
        inline app::OffsetInstruction__Class* get_class() {
            return il2cpp::get_class<app::OffsetInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "OffsetInstruction");
        }
        inline app::OffsetInstruction* create() {
            return il2cpp::create_object<app::OffsetInstruction>(get_class());
        }
    } // namespace OffsetInstruction
} // namespace app::classes::types
