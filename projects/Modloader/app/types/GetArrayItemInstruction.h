#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetArrayItemInstruction__Class.h>
#include <Modloader/app/structs/GetArrayItemInstruction.h>

namespace app::classes::types {
    namespace GetArrayItemInstruction {
        inline app::GetArrayItemInstruction__Class** type_info = (app::GetArrayItemInstruction__Class**)(modloader::win::memory::resolve_rva(0x04754FB0));
        inline app::GetArrayItemInstruction__Class* get_class() {
            return il2cpp::get_class<app::GetArrayItemInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "GetArrayItemInstruction");
        }
        inline app::GetArrayItemInstruction* create() {
            return il2cpp::create_object<app::GetArrayItemInstruction>(get_class());
        }
    } // namespace GetArrayItemInstruction
} // namespace app::classes::types
