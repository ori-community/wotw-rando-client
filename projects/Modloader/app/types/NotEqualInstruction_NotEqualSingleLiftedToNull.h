#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualSingleLiftedToNull.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualSingleLiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualSingleLiftedToNull {
        inline app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class** type_info() {
            static app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04760778));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualSingleLiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualSingleLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualSingleLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualSingleLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualSingleLiftedToNull
} // namespace app::classes::types
