#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NegateInstruction_NegateInt32__Class.h>
#include <Modloader/app/structs/NegateInstruction_NegateInt32.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateInt32 {
        inline app::NegateInstruction_NegateInt32__Class** type_info = (app::NegateInstruction_NegateInt32__Class**)(modloader::win::memory::resolve_rva(0x04763570));
        inline app::NegateInstruction_NegateInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateInt32");
        }
        inline app::NegateInstruction_NegateInt32* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateInt32>(get_class());
        }
    } // namespace NegateInstruction_NegateInt32
} // namespace app::classes::types
