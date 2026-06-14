#pragma once
#include <Modloader/app/structs/EnterExceptionHandlerInstruction.h>
#include <Modloader/app/structs/EnterExceptionHandlerInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnterExceptionHandlerInstruction {
        inline app::EnterExceptionHandlerInstruction__Class** type_info() {
            static app::EnterExceptionHandlerInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnterExceptionHandlerInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F148));
            }
            return cache;
        }
        inline app::EnterExceptionHandlerInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterExceptionHandlerInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EnterExceptionHandlerInstruction");
        }
        inline app::EnterExceptionHandlerInstruction* create() {
            return il2cpp::create_object<app::EnterExceptionHandlerInstruction>(get_class());
        }
    } // namespace EnterExceptionHandlerInstruction
} // namespace app::classes::types
