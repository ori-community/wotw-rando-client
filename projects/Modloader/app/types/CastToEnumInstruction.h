#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CastToEnumInstruction {
        inline app::CastToEnumInstruction__Class** type_info = (app::CastToEnumInstruction__Class**)(modloader::win::memory::resolve_rva(0x04784540));
        inline app::CastToEnumInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastToEnumInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastToEnumInstruction");
        }
        inline app::CastToEnumInstruction* create() {
            return il2cpp::create_object<app::CastToEnumInstruction>(get_class());
        }
    } // namespace CastToEnumInstruction
} // namespace app::classes::types
