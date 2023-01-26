#pragma once
#include <Modloader/app/structs/CallInstruction.h>
#include <Modloader/app/structs/CallInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallInstruction {
        inline app::CallInstruction__Class** type_info() {
            static app::CallInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallInstruction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallInstruction__Class* get_class() {
            return il2cpp::get_class<app::CallInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CallInstruction");
        }
        inline app::CallInstruction* create() {
            return il2cpp::create_object<app::CallInstruction>(get_class());
        }
    } // namespace CallInstruction
} // namespace app::classes::types
