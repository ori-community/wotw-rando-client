#pragma once
#include <Modloader/app/structs/EnterExceptionFilterInstruction.h>
#include <Modloader/app/structs/EnterExceptionFilterInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnterExceptionFilterInstruction {
        inline app::EnterExceptionFilterInstruction__Class** type_info() {
            static app::EnterExceptionFilterInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnterExceptionFilterInstruction__Class**)(modloader::win::memory::resolve_rva(0x047543C8));
            }
            return cache;
        }
        inline app::EnterExceptionFilterInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterExceptionFilterInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EnterExceptionFilterInstruction");
        }
        inline app::EnterExceptionFilterInstruction* create() {
            return il2cpp::create_object<app::EnterExceptionFilterInstruction>(get_class());
        }
    } // namespace EnterExceptionFilterInstruction
} // namespace app::classes::types
