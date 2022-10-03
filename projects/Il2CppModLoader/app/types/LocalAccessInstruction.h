#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalAccessInstruction {
        namespace {
            app::LocalAccessInstruction__Class* type_info_ref = nullptr;
        }
        app::LocalAccessInstruction__Class** type_info = &type_info_ref;
        inline app::LocalAccessInstruction__Class* get_class() {
            return il2cpp::get_class<app::LocalAccessInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalAccessInstruction");
        }
        inline app::LocalAccessInstruction* create() {
            return il2cpp::create_object<app::LocalAccessInstruction>(get_class());
        }
    } // namespace LocalAccessInstruction
} // namespace app::classes::types
