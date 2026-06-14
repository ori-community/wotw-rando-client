#pragma once
#include <Modloader/app/structs/TypeEqualsInstruction.h>
#include <Modloader/app/structs/TypeEqualsInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeEqualsInstruction {
        inline app::TypeEqualsInstruction__Class** type_info() {
            static app::TypeEqualsInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeEqualsInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472EE98));
            }
            return cache;
        }
        inline app::TypeEqualsInstruction__Class* get_class() {
            return il2cpp::get_class<app::TypeEqualsInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "TypeEqualsInstruction");
        }
        inline app::TypeEqualsInstruction* create() {
            return il2cpp::create_object<app::TypeEqualsInstruction>(get_class());
        }
    } // namespace TypeEqualsInstruction
} // namespace app::classes::types
