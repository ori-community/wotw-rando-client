#pragma once
#include <Modloader/app/structs/NumericConvertInstruction.h>
#include <Modloader/app/structs/NumericConvertInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NumericConvertInstruction {
        inline app::NumericConvertInstruction__Class** type_info() {
            static app::NumericConvertInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NumericConvertInstruction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NumericConvertInstruction__Class* get_class() {
            return il2cpp::get_class<app::NumericConvertInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NumericConvertInstruction");
        }
        inline app::NumericConvertInstruction* create() {
            return il2cpp::create_object<app::NumericConvertInstruction>(get_class());
        }
    } // namespace NumericConvertInstruction
} // namespace app::classes::types
