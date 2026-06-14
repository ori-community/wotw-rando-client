#pragma once
#include <Modloader/app/structs/StoreFieldInstruction.h>
#include <Modloader/app/structs/StoreFieldInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreFieldInstruction {
        inline app::StoreFieldInstruction__Class** type_info() {
            static app::StoreFieldInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StoreFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478AED8));
            }
            return cache;
        }
        inline app::StoreFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreFieldInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "StoreFieldInstruction");
        }
        inline app::StoreFieldInstruction* create() {
            return il2cpp::create_object<app::StoreFieldInstruction>(get_class());
        }
    } // namespace StoreFieldInstruction
} // namespace app::classes::types
