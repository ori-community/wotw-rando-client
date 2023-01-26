#pragma once
#include <Modloader/app/structs/EnterFinallyInstruction__Array.h>
#include <Modloader/app/structs/EnterFinallyInstruction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnterFinallyInstruction__Array {
        inline app::EnterFinallyInstruction__Array__Class** type_info() {
            static app::EnterFinallyInstruction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnterFinallyInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x0478A0B8));
            }
            return cache;
        }
        inline app::EnterFinallyInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::EnterFinallyInstruction__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EnterFinallyInstruction[]");
        }
        inline app::EnterFinallyInstruction__Array* create() {
            return il2cpp::create_object<app::EnterFinallyInstruction__Array>(get_class());
        }
    } // namespace EnterFinallyInstruction__Array
} // namespace app::classes::types
