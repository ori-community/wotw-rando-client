#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LessThanInstruction__Class.h>
#include <Modloader/app/structs/LessThanInstruction.h>

namespace app::classes::types {
    namespace LessThanInstruction {
        inline app::LessThanInstruction__Class** type_info = (app::LessThanInstruction__Class**)(modloader::win::memory::resolve_rva(0x04769220));
        inline app::LessThanInstruction__Class* get_class() {
            return il2cpp::get_class<app::LessThanInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction");
        }
        inline app::LessThanInstruction* create() {
            return il2cpp::create_object<app::LessThanInstruction>(get_class());
        }
    } // namespace LessThanInstruction
} // namespace app::classes::types
