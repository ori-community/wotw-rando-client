#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByRefMethodInfoCallInstruction {
        inline app::ByRefMethodInfoCallInstruction__Class** type_info = (app::ByRefMethodInfoCallInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470DAB8));
        inline app::ByRefMethodInfoCallInstruction__Class* get_class() {
            return il2cpp::get_class<app::ByRefMethodInfoCallInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ByRefMethodInfoCallInstruction");
        }
        inline app::ByRefMethodInfoCallInstruction* create() {
            return il2cpp::create_object<app::ByRefMethodInfoCallInstruction>(get_class());
        }
    } // namespace ByRefMethodInfoCallInstruction
} // namespace app::classes::types
