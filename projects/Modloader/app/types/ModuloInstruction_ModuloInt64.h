#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloInt64 {
        inline app::ModuloInstruction_ModuloInt64__Class** type_info = (app::ModuloInstruction_ModuloInt64__Class**)(modloader::win::memory::resolve_rva(0x0473E4F8));
        inline app::ModuloInstruction_ModuloInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloInt64");
        }
        inline app::ModuloInstruction_ModuloInt64* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloInt64>(get_class());
        }
    } // namespace ModuloInstruction_ModuloInt64
} // namespace app::classes::types
