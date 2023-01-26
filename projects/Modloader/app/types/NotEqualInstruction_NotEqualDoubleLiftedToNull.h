#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualDoubleLiftedToNull.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualDoubleLiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualDoubleLiftedToNull {
        inline app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class** type_info() {
            static app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04778CD8));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualDoubleLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualDoubleLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualDoubleLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualDoubleLiftedToNull
} // namespace app::classes::types
