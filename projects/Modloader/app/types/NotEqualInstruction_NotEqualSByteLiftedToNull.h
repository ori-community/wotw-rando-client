#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualSByteLiftedToNull.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualSByteLiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualSByteLiftedToNull {
        inline app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class** type_info() {
            static app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04760660));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualSByteLiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualSByteLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualSByteLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualSByteLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualSByteLiftedToNull
} // namespace app::classes::types
