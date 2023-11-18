#pragma once
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class** type_info() {
            static app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class**)(modloader::win::memory::resolve_rva(0x047705A0));
            }
            return cache;
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualSByte");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte
} // namespace app::classes::types
