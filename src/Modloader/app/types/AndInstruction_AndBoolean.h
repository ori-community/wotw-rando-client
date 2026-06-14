#pragma once
#include <Modloader/app/structs/AndInstruction_AndBoolean.h>
#include <Modloader/app/structs/AndInstruction_AndBoolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndBoolean {
        inline app::AndInstruction_AndBoolean__Class** type_info() {
            static app::AndInstruction_AndBoolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndInstruction_AndBoolean__Class**)(modloader::win::memory::resolve_rva(0x0470E978));
            }
            return cache;
        }
        inline app::AndInstruction_AndBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndBoolean__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AndInstruction", "AndBoolean");
        }
        inline app::AndInstruction_AndBoolean* create() {
            return il2cpp::create_object<app::AndInstruction_AndBoolean>(get_class());
        }
    } // namespace AndInstruction_AndBoolean
} // namespace app::classes::types
