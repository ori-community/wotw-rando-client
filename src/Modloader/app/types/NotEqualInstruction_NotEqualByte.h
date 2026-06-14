#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualByte.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualByte {
        inline app::NotEqualInstruction_NotEqualByte__Class** type_info() {
            static app::NotEqualInstruction_NotEqualByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualByte__Class**)(modloader::win::memory::resolve_rva(0x04725620));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualByte");
        }
        inline app::NotEqualInstruction_NotEqualByte* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualByte>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualByte
} // namespace app::classes::types
