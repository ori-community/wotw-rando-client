#pragma once
#include <Modloader/app/structs/NotInstruction_NotInt64.h>
#include <Modloader/app/structs/NotInstruction_NotInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotInt64 {
        inline app::NotInstruction_NotInt64__Class** type_info() {
            static app::NotInstruction_NotInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotInstruction_NotInt64__Class**)(modloader::win::memory::resolve_rva(0x0478CAA8));
            }
            return cache;
        }
        inline app::NotInstruction_NotInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotInstruction", "NotInt64");
        }
        inline app::NotInstruction_NotInt64* create() {
            return il2cpp::create_object<app::NotInstruction_NotInt64>(get_class());
        }
    } // namespace NotInstruction_NotInt64
} // namespace app::classes::types
