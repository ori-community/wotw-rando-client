#pragma once
#include <Modloader/app/structs/AndInstruction_AndUInt64.h>
#include <Modloader/app/structs/AndInstruction_AndUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndUInt64 {
        inline app::AndInstruction_AndUInt64__Class** type_info() {
            static app::AndInstruction_AndUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndInstruction_AndUInt64__Class**)(modloader::win::memory::resolve_rva(0x04757A48));
            }
            return cache;
        }
        inline app::AndInstruction_AndUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AndInstruction", "AndUInt64");
        }
        inline app::AndInstruction_AndUInt64* create() {
            return il2cpp::create_object<app::AndInstruction_AndUInt64>(get_class());
        }
    } // namespace AndInstruction_AndUInt64
} // namespace app::classes::types
