#pragma once
#include <Modloader/app/structs/InitializeLocalInstruction.h>
#include <Modloader/app/structs/InitializeLocalInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction {
        inline app::InitializeLocalInstruction__Class** type_info() {
            static app::InitializeLocalInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InitializeLocalInstruction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InitializeLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::InitializeLocalInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction");
        }
        inline app::InitializeLocalInstruction* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction>(get_class());
        }
    } // namespace InitializeLocalInstruction
} // namespace app::classes::types
