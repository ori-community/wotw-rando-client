#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IBoxableInstruction__Class.h>

namespace app::classes::types {
    namespace IBoxableInstruction {
        inline app::IBoxableInstruction__Class** type_info = (app::IBoxableInstruction__Class**)(modloader::win::memory::resolve_rva(0x0476DFC8));
        inline app::IBoxableInstruction__Class* get_class() {
            return il2cpp::get_class<app::IBoxableInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "IBoxableInstruction");
        }
    } // namespace IBoxableInstruction
} // namespace app::classes::types
