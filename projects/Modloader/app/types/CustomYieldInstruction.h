#pragma once
#include <Modloader/app/structs/CustomYieldInstruction.h>
#include <Modloader/app/structs/CustomYieldInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomYieldInstruction {
        inline app::CustomYieldInstruction__Class** type_info() {
            static app::CustomYieldInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomYieldInstruction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomYieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::CustomYieldInstruction__Class>(type_info(), "UnityEngine", "CustomYieldInstruction");
        }
        inline app::CustomYieldInstruction* create() {
            return il2cpp::create_object<app::CustomYieldInstruction>(get_class());
        }
    } // namespace CustomYieldInstruction
} // namespace app::classes::types
