#pragma once
#include <Modloader/app/structs/NumericConvertInstruction_Checked.h>
#include <Modloader/app/structs/NumericConvertInstruction_Checked__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NumericConvertInstruction_Checked {
        inline app::NumericConvertInstruction_Checked__Class** type_info() {
            static app::NumericConvertInstruction_Checked__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NumericConvertInstruction_Checked__Class**)(modloader::win::memory::resolve_rva(0x0474B608));
            }
            return cache;
        }
        inline app::NumericConvertInstruction_Checked__Class* get_class() {
            return il2cpp::get_nested_class<app::NumericConvertInstruction_Checked__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NumericConvertInstruction", "Checked");
        }
        inline app::NumericConvertInstruction_Checked* create() {
            return il2cpp::create_object<app::NumericConvertInstruction_Checked>(get_class());
        }
    } // namespace NumericConvertInstruction_Checked
} // namespace app::classes::types
