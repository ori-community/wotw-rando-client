#pragma once
#include <Modloader/app/structs/AndInstruction_AndUInt32.h>
#include <Modloader/app/structs/AndInstruction_AndUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndUInt32 {
        inline app::AndInstruction_AndUInt32__Class** type_info() {
            static app::AndInstruction_AndUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndInstruction_AndUInt32__Class**)(modloader::win::memory::resolve_rva(0x04774FD8));
            }
            return cache;
        }
        inline app::AndInstruction_AndUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AndInstruction", "AndUInt32");
        }
        inline app::AndInstruction_AndUInt32* create() {
            return il2cpp::create_object<app::AndInstruction_AndUInt32>(get_class());
        }
    } // namespace AndInstruction_AndUInt32
} // namespace app::classes::types
