#pragma once
#include <Modloader/app/structs/StoreLocalInstruction.h>
#include <Modloader/app/structs/StoreLocalInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreLocalInstruction {
        inline app::StoreLocalInstruction__Class** type_info() {
            static app::StoreLocalInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StoreLocalInstruction__Class**)(modloader::win::memory::resolve_rva(0x0471A8D8));
            }
            return cache;
        }
        inline app::StoreLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreLocalInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "StoreLocalInstruction");
        }
        inline app::StoreLocalInstruction* create() {
            return il2cpp::create_object<app::StoreLocalInstruction>(get_class());
        }
    } // namespace StoreLocalInstruction
} // namespace app::classes::types
