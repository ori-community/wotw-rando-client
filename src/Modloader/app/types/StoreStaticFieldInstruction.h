#pragma once
#include <Modloader/app/structs/StoreStaticFieldInstruction.h>
#include <Modloader/app/structs/StoreStaticFieldInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreStaticFieldInstruction {
        inline app::StoreStaticFieldInstruction__Class** type_info() {
            static app::StoreStaticFieldInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StoreStaticFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x0475D670));
            }
            return cache;
        }
        inline app::StoreStaticFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreStaticFieldInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "StoreStaticFieldInstruction");
        }
        inline app::StoreStaticFieldInstruction* create() {
            return il2cpp::create_object<app::StoreStaticFieldInstruction>(get_class());
        }
    } // namespace StoreStaticFieldInstruction
} // namespace app::classes::types
