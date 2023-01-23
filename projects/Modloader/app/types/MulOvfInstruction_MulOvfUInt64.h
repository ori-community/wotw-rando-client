#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MulOvfInstruction_MulOvfUInt64__Class.h>
#include <Modloader/app/structs/MulOvfInstruction_MulOvfUInt64.h>

namespace app::classes::types {
    namespace MulOvfInstruction_MulOvfUInt64 {
        inline app::MulOvfInstruction_MulOvfUInt64__Class** type_info = (app::MulOvfInstruction_MulOvfUInt64__Class**)(modloader::win::memory::resolve_rva(0x047760B0));
        inline app::MulOvfInstruction_MulOvfUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::MulOvfInstruction_MulOvfUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulOvfInstruction", "MulOvfUInt64");
        }
        inline app::MulOvfInstruction_MulOvfUInt64* create() {
            return il2cpp::create_object<app::MulOvfInstruction_MulOvfUInt64>(get_class());
        }
    } // namespace MulOvfInstruction_MulOvfUInt64
} // namespace app::classes::types
