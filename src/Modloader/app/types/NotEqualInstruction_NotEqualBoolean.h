#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualBoolean.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualBoolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualBoolean {
        inline app::NotEqualInstruction_NotEqualBoolean__Class** type_info() {
            static app::NotEqualInstruction_NotEqualBoolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualBoolean__Class**)(modloader::win::memory::resolve_rva(0x04780840));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualBoolean__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualBoolean");
        }
        inline app::NotEqualInstruction_NotEqualBoolean* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualBoolean>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualBoolean
} // namespace app::classes::types
