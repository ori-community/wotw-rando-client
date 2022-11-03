#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FieldInstruction {
        namespace {
            inline app::FieldInstruction__Class* type_info_ref = nullptr;
        }
        inline app::FieldInstruction__Class** type_info = &type_info_ref;
        inline app::FieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::FieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "FieldInstruction");
        }
        inline app::FieldInstruction* create() {
            return il2cpp::create_object<app::FieldInstruction>(get_class());
        }
    } // namespace FieldInstruction
} // namespace app::classes::types
