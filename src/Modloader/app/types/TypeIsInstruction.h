#pragma once
#include <Modloader/app/structs/TypeIsInstruction.h>
#include <Modloader/app/structs/TypeIsInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeIsInstruction {
        inline app::TypeIsInstruction__Class** type_info() {
            static app::TypeIsInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeIsInstruction__Class**)(modloader::win::memory::resolve_rva(0x04770DF0));
            }
            return cache;
        }
        inline app::TypeIsInstruction__Class* get_class() {
            return il2cpp::get_class<app::TypeIsInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "TypeIsInstruction");
        }
        inline app::TypeIsInstruction* create() {
            return il2cpp::create_object<app::TypeIsInstruction>(get_class());
        }
    } // namespace TypeIsInstruction
} // namespace app::classes::types
