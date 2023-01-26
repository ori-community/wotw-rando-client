#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualChar.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualChar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualChar {
        inline app::NotEqualInstruction_NotEqualChar__Class** type_info() {
            static app::NotEqualInstruction_NotEqualChar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualChar__Class**)(modloader::win::memory::resolve_rva(0x0475AEE0));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualChar__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualChar");
        }
        inline app::NotEqualInstruction_NotEqualChar* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualChar>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualChar
} // namespace app::classes::types
