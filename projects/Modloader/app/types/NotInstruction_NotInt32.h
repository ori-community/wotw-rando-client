#pragma once
#include <Modloader/app/structs/NotInstruction_NotInt32.h>
#include <Modloader/app/structs/NotInstruction_NotInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotInt32 {
        inline app::NotInstruction_NotInt32__Class** type_info() {
            static app::NotInstruction_NotInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotInstruction_NotInt32__Class**)(modloader::win::memory::resolve_rva(0x04749440));
            }
            return cache;
        }
        inline app::NotInstruction_NotInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotInstruction", "NotInt32");
        }
        inline app::NotInstruction_NotInt32* create() {
            return il2cpp::create_object<app::NotInstruction_NotInt32>(get_class());
        }
    } // namespace NotInstruction_NotInt32
} // namespace app::classes::types
