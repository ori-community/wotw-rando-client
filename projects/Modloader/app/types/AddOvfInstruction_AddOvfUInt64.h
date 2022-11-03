#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddOvfInstruction_AddOvfUInt64 {
        inline app::AddOvfInstruction_AddOvfUInt64__Class** type_info = (app::AddOvfInstruction_AddOvfUInt64__Class**)(modloader::win::memory::resolve_rva(0x047879F8));
        inline app::AddOvfInstruction_AddOvfUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddOvfInstruction_AddOvfUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddOvfInstruction", "AddOvfUInt64");
        }
        inline app::AddOvfInstruction_AddOvfUInt64* create() {
            return il2cpp::create_object<app::AddOvfInstruction_AddOvfUInt64>(get_class());
        }
    } // namespace AddOvfInstruction_AddOvfUInt64
} // namespace app::classes::types
