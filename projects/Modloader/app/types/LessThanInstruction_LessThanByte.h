#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanByte {
        inline app::LessThanInstruction_LessThanByte__Class** type_info = (app::LessThanInstruction_LessThanByte__Class**)(modloader::win::memory::resolve_rva(0x047664C0));
        inline app::LessThanInstruction_LessThanByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanByte");
        }
        inline app::LessThanInstruction_LessThanByte* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanByte>(get_class());
        }
    } // namespace LessThanInstruction_LessThanByte
} // namespace app::classes::types
