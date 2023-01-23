#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NumericConvertInstruction_Unchecked__Class.h>
#include <Modloader/app/structs/NumericConvertInstruction_Unchecked.h>

namespace app::classes::types {
    namespace NumericConvertInstruction_Unchecked {
        inline app::NumericConvertInstruction_Unchecked__Class** type_info = (app::NumericConvertInstruction_Unchecked__Class**)(modloader::win::memory::resolve_rva(0x04781148));
        inline app::NumericConvertInstruction_Unchecked__Class* get_class() {
            return il2cpp::get_nested_class<app::NumericConvertInstruction_Unchecked__Class>(type_info, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction", "Unchecked");
        }
        inline app::NumericConvertInstruction_Unchecked* create() {
            return il2cpp::create_object<app::NumericConvertInstruction_Unchecked>(get_class());
        }
    } // namespace NumericConvertInstruction_Unchecked
} // namespace app::classes::types
