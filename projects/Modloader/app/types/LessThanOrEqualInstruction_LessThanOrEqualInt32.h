#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualInt32__Class.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualInt32.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt32 {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class** type_info = (app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0478D740));
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualInt32");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt32* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualInt32>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualInt32
} // namespace app::classes::types
