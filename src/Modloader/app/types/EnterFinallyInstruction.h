#pragma once
#include <Modloader/app/structs/EnterFinallyInstruction.h>
#include <Modloader/app/structs/EnterFinallyInstruction__Array.h>
#include <Modloader/app/structs/EnterFinallyInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnterFinallyInstruction {
        inline app::EnterFinallyInstruction__Class** type_info() {
            static app::EnterFinallyInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnterFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x04736A30));
            }
            return cache;
        }
        inline app::EnterFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterFinallyInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EnterFinallyInstruction");
        }
        inline app::EnterFinallyInstruction* create() {
            return il2cpp::create_object<app::EnterFinallyInstruction>(get_class());
        }
        inline app::EnterFinallyInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::EnterFinallyInstruction__Array>(get_class(), size);
        }
        inline app::EnterFinallyInstruction__Array* create_array(const std::vector<app::EnterFinallyInstruction*>& items) {
            return il2cpp::array_new<app::EnterFinallyInstruction__Array>(get_class(), items);
        }
    } // namespace EnterFinallyInstruction
} // namespace app::classes::types
