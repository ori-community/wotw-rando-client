#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace YieldInstruction {
        namespace {
            inline app::YieldInstruction__Class* type_info_ref = nullptr;
        }
        inline app::YieldInstruction__Class** type_info = &type_info_ref;
        inline app::YieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::YieldInstruction__Class>(type_info, "UnityEngine", "YieldInstruction");
        }
        inline app::YieldInstruction* create() {
            return il2cpp::create_object<app::YieldInstruction>(get_class());
        }
    } // namespace YieldInstruction
} // namespace app::classes::types
