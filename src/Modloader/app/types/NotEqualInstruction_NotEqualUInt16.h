#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualUInt16.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualUInt16 {
        inline app::NotEqualInstruction_NotEqualUInt16__Class** type_info() {
            static app::NotEqualInstruction_NotEqualUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x04715F88));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualUInt16");
        }
        inline app::NotEqualInstruction_NotEqualUInt16* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualUInt16>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualUInt16
} // namespace app::classes::types
