#pragma once
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrBoolean.h>
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrBoolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrBoolean {
        inline app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class** type_info() {
            static app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class**)(modloader::win::memory::resolve_rva(0x04781AB8));
            }
            return cache;
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrBoolean__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrBoolean");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrBoolean* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrBoolean>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrBoolean
} // namespace app::classes::types
