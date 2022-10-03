#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction {
        namespace {
            app::InitializeLocalInstruction__Class* type_info_ref = nullptr;
        }
        app::InitializeLocalInstruction__Class** type_info = &type_info_ref;
        inline app::InitializeLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::InitializeLocalInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction");
        }
        inline app::InitializeLocalInstruction* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction>(get_class());
        }
    } // namespace InitializeLocalInstruction
} // namespace app::classes::types
