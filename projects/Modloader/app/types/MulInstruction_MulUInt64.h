#pragma once
#include <Modloader/app/structs/MulInstruction_MulUInt64.h>
#include <Modloader/app/structs/MulInstruction_MulUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulInstruction_MulUInt64 {
        inline app::MulInstruction_MulUInt64__Class** type_info() {
            static app::MulInstruction_MulUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulInstruction_MulUInt64__Class**)(modloader::win::memory::resolve_rva(0x0474CC50));
            }
            return cache;
        }
        inline app::MulInstruction_MulUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "MulInstruction", "MulUInt64");
        }
        inline app::MulInstruction_MulUInt64* create() {
            return il2cpp::create_object<app::MulInstruction_MulUInt64>(get_class());
        }
    } // namespace MulInstruction_MulUInt64
} // namespace app::classes::types
