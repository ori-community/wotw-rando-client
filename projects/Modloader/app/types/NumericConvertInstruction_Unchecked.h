#pragma once
#include <Modloader/app/structs/NumericConvertInstruction_Unchecked.h>
#include <Modloader/app/structs/NumericConvertInstruction_Unchecked__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NumericConvertInstruction_Unchecked {
        inline app::NumericConvertInstruction_Unchecked__Class** type_info() {
            static app::NumericConvertInstruction_Unchecked__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NumericConvertInstruction_Unchecked__Class**)(modloader::win::memory::resolve_rva(0x04781148));
            }
            return cache;
        }
        inline app::NumericConvertInstruction_Unchecked__Class* get_class() {
            return il2cpp::get_nested_class<app::NumericConvertInstruction_Unchecked__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NumericConvertInstruction", "Unchecked");
        }
        inline app::NumericConvertInstruction_Unchecked* create() {
            return il2cpp::create_object<app::NumericConvertInstruction_Unchecked>(get_class());
        }
    } // namespace NumericConvertInstruction_Unchecked
} // namespace app::classes::types
