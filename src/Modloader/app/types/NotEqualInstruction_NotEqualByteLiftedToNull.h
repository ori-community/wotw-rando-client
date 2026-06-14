#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualByteLiftedToNull.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualByteLiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualByteLiftedToNull {
        inline app::NotEqualInstruction_NotEqualByteLiftedToNull__Class** type_info() {
            static app::NotEqualInstruction_NotEqualByteLiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04722CB0));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualByteLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualByteLiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualByteLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualByteLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualByteLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualByteLiftedToNull
} // namespace app::classes::types
