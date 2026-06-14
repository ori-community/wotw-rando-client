#pragma once
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrInt16.h>
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrInt16 {
        inline app::ExclusiveOrInstruction_ExclusiveOrInt16__Class** type_info() {
            static app::ExclusiveOrInstruction_ExclusiveOrInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExclusiveOrInstruction_ExclusiveOrInt16__Class**)(modloader::win::memory::resolve_rva(0x0477DB78));
            }
            return cache;
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrInt16");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrInt16* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrInt16>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrInt16
} // namespace app::classes::types
