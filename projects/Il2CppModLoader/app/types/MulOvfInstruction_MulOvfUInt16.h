#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulOvfInstruction_MulOvfUInt16 {
        inline app::MulOvfInstruction_MulOvfUInt16__Class** type_info = (app::MulOvfInstruction_MulOvfUInt16__Class**)(modloader::win::memory::resolve_rva(0x04787878));
        inline app::MulOvfInstruction_MulOvfUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::MulOvfInstruction_MulOvfUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulOvfInstruction", "MulOvfUInt16");
        }
        inline app::MulOvfInstruction_MulOvfUInt16* create() {
            return il2cpp::create_object<app::MulOvfInstruction_MulOvfUInt16>(get_class());
        }
    } // namespace MulOvfInstruction_MulOvfUInt16
} // namespace app::classes::types
