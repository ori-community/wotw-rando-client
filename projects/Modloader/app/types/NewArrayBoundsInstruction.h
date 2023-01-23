#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NewArrayBoundsInstruction__Class.h>
#include <Modloader/app/structs/NewArrayBoundsInstruction.h>

namespace app::classes::types {
    namespace NewArrayBoundsInstruction {
        inline app::NewArrayBoundsInstruction__Class** type_info = (app::NewArrayBoundsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04761080));
        inline app::NewArrayBoundsInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayBoundsInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NewArrayBoundsInstruction");
        }
        inline app::NewArrayBoundsInstruction* create() {
            return il2cpp::create_object<app::NewArrayBoundsInstruction>(get_class());
        }
    } // namespace NewArrayBoundsInstruction
} // namespace app::classes::types
