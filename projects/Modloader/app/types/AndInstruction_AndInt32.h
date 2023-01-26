#pragma once
#include <Modloader/app/structs/AndInstruction_AndInt32.h>
#include <Modloader/app/structs/AndInstruction_AndInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndInt32 {
        inline app::AndInstruction_AndInt32__Class** type_info() {
            static app::AndInstruction_AndInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndInstruction_AndInt32__Class**)(modloader::win::memory::resolve_rva(0x0474B9B0));
            }
            return cache;
        }
        inline app::AndInstruction_AndInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AndInstruction", "AndInt32");
        }
        inline app::AndInstruction_AndInt32* create() {
            return il2cpp::create_object<app::AndInstruction_AndInt32>(get_class());
        }
    } // namespace AndInstruction_AndInt32
} // namespace app::classes::types
