#pragma once
#include <Modloader/app/structs/YieldInstruction.h>
#include <Modloader/app/structs/YieldInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace YieldInstruction {
        inline app::YieldInstruction__Class** type_info() {
            static app::YieldInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::YieldInstruction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::YieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::YieldInstruction__Class>(type_info(), "UnityEngine", "YieldInstruction");
        }
        inline app::YieldInstruction* create() {
            return il2cpp::create_object<app::YieldInstruction>(get_class());
        }
    } // namespace YieldInstruction
} // namespace app::classes::types
