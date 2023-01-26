#pragma once
#include <Modloader/app/structs/LessThanInstruction_LessThanChar.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanChar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanChar {
        inline app::LessThanInstruction_LessThanChar__Class** type_info() {
            static app::LessThanInstruction_LessThanChar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanInstruction_LessThanChar__Class**)(modloader::win::memory::resolve_rva(0x0472D338));
            }
            return cache;
        }
        inline app::LessThanInstruction_LessThanChar__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanChar__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanChar");
        }
        inline app::LessThanInstruction_LessThanChar* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanChar>(get_class());
        }
    } // namespace LessThanInstruction_LessThanChar
} // namespace app::classes::types
