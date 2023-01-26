#pragma once
#include <Modloader/app/structs/CreateDelegateInstruction.h>
#include <Modloader/app/structs/CreateDelegateInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateDelegateInstruction {
        inline app::CreateDelegateInstruction__Class** type_info() {
            static app::CreateDelegateInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateDelegateInstruction__Class**)(modloader::win::memory::resolve_rva(0x04768940));
            }
            return cache;
        }
        inline app::CreateDelegateInstruction__Class* get_class() {
            return il2cpp::get_class<app::CreateDelegateInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CreateDelegateInstruction");
        }
        inline app::CreateDelegateInstruction* create() {
            return il2cpp::create_object<app::CreateDelegateInstruction>(get_class());
        }
    } // namespace CreateDelegateInstruction
} // namespace app::classes::types
