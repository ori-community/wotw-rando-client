#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualInt16__Class.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualInt16.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt16 {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt16__Class** type_info = (app::LessThanOrEqualInstruction_LessThanOrEqualInt16__Class**)(modloader::win::memory::resolve_rva(0x0477ED48));
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualInt16");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt16* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualInt16>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualInt16
} // namespace app::classes::types
