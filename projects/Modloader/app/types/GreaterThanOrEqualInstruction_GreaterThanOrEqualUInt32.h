#pragma once
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32 {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32__Class** type_info() {
            static app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32__Class**)(modloader::win::memory::resolve_rva(0x0478EC48));
            }
            return cache;
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualUInt32");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32
} // namespace app::classes::types
