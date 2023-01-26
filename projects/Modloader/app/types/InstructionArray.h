#pragma once
#include <Modloader/app/structs/InstructionArray.h>
#include <Modloader/app/structs/InstructionArray__Boxed.h>
#include <Modloader/app/structs/InstructionArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstructionArray {
        inline app::InstructionArray__Class** type_info() {
            static app::InstructionArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstructionArray__Class**)(modloader::win::memory::resolve_rva(0x0476ACE8));
            }
            return cache;
        }
        inline app::InstructionArray__Class* get_class() {
            return il2cpp::get_class<app::InstructionArray__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InstructionArray");
        }
        inline app::InstructionArray* create() {
            return il2cpp::create_object<app::InstructionArray>(get_class());
        }
        inline app::InstructionArray__Boxed* box(app::InstructionArray value) {
            return il2cpp::box_value<app::InstructionArray__Boxed>(get_class(), value);
        }
    } // namespace InstructionArray
} // namespace app::classes::types
