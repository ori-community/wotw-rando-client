#pragma once
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanUInt32.h>
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanUInt32 {
        inline app::GreaterThanInstruction_GreaterThanUInt32__Class** type_info() {
            static app::GreaterThanInstruction_GreaterThanUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanInstruction_GreaterThanUInt32__Class**)(modloader::win::memory::resolve_rva(0x0472BF50));
            }
            return cache;
        }
        inline app::GreaterThanInstruction_GreaterThanUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanUInt32");
        }
        inline app::GreaterThanInstruction_GreaterThanUInt32* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanUInt32>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanUInt32
} // namespace app::classes::types
