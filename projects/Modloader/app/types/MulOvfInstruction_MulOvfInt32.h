#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MulOvfInstruction_MulOvfInt32__Class.h>
#include <Modloader/app/structs/MulOvfInstruction_MulOvfInt32.h>

namespace app::classes::types {
    namespace MulOvfInstruction_MulOvfInt32 {
        inline app::MulOvfInstruction_MulOvfInt32__Class** type_info = (app::MulOvfInstruction_MulOvfInt32__Class**)(modloader::win::memory::resolve_rva(0x0478F3F0));
        inline app::MulOvfInstruction_MulOvfInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::MulOvfInstruction_MulOvfInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulOvfInstruction", "MulOvfInt32");
        }
        inline app::MulOvfInstruction_MulOvfInt32* create() {
            return il2cpp::create_object<app::MulOvfInstruction_MulOvfInt32>(get_class());
        }
    } // namespace MulOvfInstruction_MulOvfInt32
} // namespace app::classes::types
