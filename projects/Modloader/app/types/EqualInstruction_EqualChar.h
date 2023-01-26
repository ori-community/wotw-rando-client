#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualChar.h>
#include <Modloader/app/structs/EqualInstruction_EqualChar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualChar {
        inline app::EqualInstruction_EqualChar__Class** type_info() {
            static app::EqualInstruction_EqualChar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualChar__Class**)(modloader::win::memory::resolve_rva(0x0474B940));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualChar__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualChar");
        }
        inline app::EqualInstruction_EqualChar* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualChar>(get_class());
        }
    } // namespace EqualInstruction_EqualChar
} // namespace app::classes::types
