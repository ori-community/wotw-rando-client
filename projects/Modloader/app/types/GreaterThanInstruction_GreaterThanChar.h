#pragma once
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanChar.h>
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanChar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanChar {
        inline app::GreaterThanInstruction_GreaterThanChar__Class** type_info() {
            static app::GreaterThanInstruction_GreaterThanChar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanInstruction_GreaterThanChar__Class**)(modloader::win::memory::resolve_rva(0x04703718));
            }
            return cache;
        }
        inline app::GreaterThanInstruction_GreaterThanChar__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanChar__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanChar");
        }
        inline app::GreaterThanInstruction_GreaterThanChar* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanChar>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanChar
} // namespace app::classes::types
