#pragma once
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanByte.h>
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanByte {
        inline app::GreaterThanInstruction_GreaterThanByte__Class** type_info() {
            static app::GreaterThanInstruction_GreaterThanByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanInstruction_GreaterThanByte__Class**)(modloader::win::memory::resolve_rva(0x04761388));
            }
            return cache;
        }
        inline app::GreaterThanInstruction_GreaterThanByte__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanByte");
        }
        inline app::GreaterThanInstruction_GreaterThanByte* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanByte>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanByte
} // namespace app::classes::types
