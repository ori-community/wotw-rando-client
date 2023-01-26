#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualUInt64.h>
#include <Modloader/app/structs/EqualInstruction_EqualUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualUInt64 {
        inline app::EqualInstruction_EqualUInt64__Class** type_info() {
            static app::EqualInstruction_EqualUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualUInt64__Class**)(modloader::win::memory::resolve_rva(0x04775460));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualUInt64");
        }
        inline app::EqualInstruction_EqualUInt64* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualUInt64>(get_class());
        }
    } // namespace EqualInstruction_EqualUInt64
} // namespace app::classes::types
