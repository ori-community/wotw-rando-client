#pragma once
#include <Modloader/app/structs/FieldInstruction.h>
#include <Modloader/app/structs/FieldInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FieldInstruction {
        inline app::FieldInstruction__Class** type_info() {
            static app::FieldInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FieldInstruction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::FieldInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "FieldInstruction");
        }
        inline app::FieldInstruction* create() {
            return il2cpp::create_object<app::FieldInstruction>(get_class());
        }
    } // namespace FieldInstruction
} // namespace app::classes::types
