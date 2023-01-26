#pragma once
#include <Modloader/app/structs/StoreLocalBoxedInstruction.h>
#include <Modloader/app/structs/StoreLocalBoxedInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreLocalBoxedInstruction {
        inline app::StoreLocalBoxedInstruction__Class** type_info() {
            static app::StoreLocalBoxedInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StoreLocalBoxedInstruction__Class**)(modloader::win::memory::resolve_rva(0x04744388));
            }
            return cache;
        }
        inline app::StoreLocalBoxedInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreLocalBoxedInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "StoreLocalBoxedInstruction");
        }
        inline app::StoreLocalBoxedInstruction* create() {
            return il2cpp::create_object<app::StoreLocalBoxedInstruction>(get_class());
        }
    } // namespace StoreLocalBoxedInstruction
} // namespace app::classes::types
