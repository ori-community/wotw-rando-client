#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OrInstruction_OrInt64 {
        inline app::OrInstruction_OrInt64__Class** type_info = (app::OrInstruction_OrInt64__Class**)(modloader::win::memory::resolve_rva(0x047387A0));
        inline app::OrInstruction_OrInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrInt64");
        }
        inline app::OrInstruction_OrInt64* create() {
            return il2cpp::create_object<app::OrInstruction_OrInt64>(get_class());
        }
    } // namespace OrInstruction_OrInt64
} // namespace app::classes::types
