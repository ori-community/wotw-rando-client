#pragma once
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrInt32.h>
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrInt32 {
        inline app::ExclusiveOrInstruction_ExclusiveOrInt32__Class** type_info() {
            static app::ExclusiveOrInstruction_ExclusiveOrInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExclusiveOrInstruction_ExclusiveOrInt32__Class**)(modloader::win::memory::resolve_rva(0x04729628));
            }
            return cache;
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrInt32");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrInt32* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrInt32>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrInt32
} // namespace app::classes::types
