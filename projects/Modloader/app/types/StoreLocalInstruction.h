#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StoreLocalInstruction {
        inline app::StoreLocalInstruction__Class** type_info = (app::StoreLocalInstruction__Class**)(modloader::win::memory::resolve_rva(0x0471A8D8));
        inline app::StoreLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreLocalInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "StoreLocalInstruction");
        }
        inline app::StoreLocalInstruction* create() {
            return il2cpp::create_object<app::StoreLocalInstruction>(get_class());
        }
    } // namespace StoreLocalInstruction
} // namespace app::classes::types
