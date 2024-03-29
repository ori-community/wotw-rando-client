#pragma once
#include <Modloader/app/structs/OrInstruction_OrBoolean.h>
#include <Modloader/app/structs/OrInstruction_OrBoolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrBoolean {
        inline app::OrInstruction_OrBoolean__Class** type_info() {
            static app::OrInstruction_OrBoolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrInstruction_OrBoolean__Class**)(modloader::win::memory::resolve_rva(0x047438F8));
            }
            return cache;
        }
        inline app::OrInstruction_OrBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrBoolean__Class>(type_info(), "System.Linq.Expressions.Interpreter", "OrInstruction", "OrBoolean");
        }
        inline app::OrInstruction_OrBoolean* create() {
            return il2cpp::create_object<app::OrInstruction_OrBoolean>(get_class());
        }
    } // namespace OrInstruction_OrBoolean
} // namespace app::classes::types
