#pragma once
#include <Modloader/app/structs/LocalAccessInstruction.h>
#include <Modloader/app/structs/LocalAccessInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalAccessInstruction {
        inline app::LocalAccessInstruction__Class** type_info() {
            static app::LocalAccessInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocalAccessInstruction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocalAccessInstruction__Class* get_class() {
            return il2cpp::get_class<app::LocalAccessInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LocalAccessInstruction");
        }
        inline app::LocalAccessInstruction* create() {
            return il2cpp::create_object<app::LocalAccessInstruction>(get_class());
        }
    } // namespace LocalAccessInstruction
} // namespace app::classes::types
