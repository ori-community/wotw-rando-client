#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanSByte {
        inline app::LessThanInstruction_LessThanSByte__Class** type_info = (app::LessThanInstruction_LessThanSByte__Class**)(modloader::win::memory::resolve_rva(0x047715B8));
        inline app::LessThanInstruction_LessThanSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanSByte");
        }
        inline app::LessThanInstruction_LessThanSByte* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanSByte>(get_class());
        }
    } // namespace LessThanInstruction_LessThanSByte
} // namespace app::classes::types
