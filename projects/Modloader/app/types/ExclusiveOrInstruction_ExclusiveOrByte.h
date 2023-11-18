#pragma once
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrByte.h>
#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrByte {
        inline app::ExclusiveOrInstruction_ExclusiveOrByte__Class** type_info() {
            static app::ExclusiveOrInstruction_ExclusiveOrByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExclusiveOrInstruction_ExclusiveOrByte__Class**)(modloader::win::memory::resolve_rva(0x04733DB8));
            }
            return cache;
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrByte__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrByte");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrByte* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrByte>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrByte
} // namespace app::classes::types
