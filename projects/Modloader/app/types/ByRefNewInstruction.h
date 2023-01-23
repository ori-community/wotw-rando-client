#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ByRefNewInstruction__Class.h>
#include <Modloader/app/structs/ByRefNewInstruction.h>

namespace app::classes::types {
    namespace ByRefNewInstruction {
        inline app::ByRefNewInstruction__Class** type_info = (app::ByRefNewInstruction__Class**)(modloader::win::memory::resolve_rva(0x0474ED28));
        inline app::ByRefNewInstruction__Class* get_class() {
            return il2cpp::get_class<app::ByRefNewInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ByRefNewInstruction");
        }
        inline app::ByRefNewInstruction* create() {
            return il2cpp::create_object<app::ByRefNewInstruction>(get_class());
        }
    } // namespace ByRefNewInstruction
} // namespace app::classes::types
