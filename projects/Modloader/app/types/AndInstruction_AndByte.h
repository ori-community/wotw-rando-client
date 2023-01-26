#pragma once
#include <Modloader/app/structs/AndInstruction_AndByte.h>
#include <Modloader/app/structs/AndInstruction_AndByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndByte {
        inline app::AndInstruction_AndByte__Class** type_info() {
            static app::AndInstruction_AndByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndInstruction_AndByte__Class**)(modloader::win::memory::resolve_rva(0x04701308));
            }
            return cache;
        }
        inline app::AndInstruction_AndByte__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AndInstruction", "AndByte");
        }
        inline app::AndInstruction_AndByte* create() {
            return il2cpp::create_object<app::AndInstruction_AndByte>(get_class());
        }
    } // namespace AndInstruction_AndByte
} // namespace app::classes::types
