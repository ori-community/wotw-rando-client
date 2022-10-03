#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomYieldInstruction {
        namespace {
            app::CustomYieldInstruction__Class* type_info_ref = nullptr;
        }
        app::CustomYieldInstruction__Class** type_info = &type_info_ref;
        inline app::CustomYieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::CustomYieldInstruction__Class>(type_info, "UnityEngine", "CustomYieldInstruction");
        }
        inline app::CustomYieldInstruction* create() {
            return il2cpp::create_object<app::CustomYieldInstruction>(get_class());
        }
    } // namespace CustomYieldInstruction
} // namespace app::classes::types
