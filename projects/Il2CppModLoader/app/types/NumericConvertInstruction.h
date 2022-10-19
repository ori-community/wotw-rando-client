#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NumericConvertInstruction {
        namespace {
            inline app::NumericConvertInstruction__Class* type_info_ref = nullptr;
        }
        inline app::NumericConvertInstruction__Class** type_info = &type_info_ref;
        inline app::NumericConvertInstruction__Class* get_class() {
            return il2cpp::get_class<app::NumericConvertInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction");
        }
        inline app::NumericConvertInstruction* create() {
            return il2cpp::create_object<app::NumericConvertInstruction>(get_class());
        }
    } // namespace NumericConvertInstruction
} // namespace app::classes::types
