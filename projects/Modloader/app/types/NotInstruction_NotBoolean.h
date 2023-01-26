#pragma once
#include <Modloader/app/structs/NotInstruction_NotBoolean.h>
#include <Modloader/app/structs/NotInstruction_NotBoolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotBoolean {
        inline app::NotInstruction_NotBoolean__Class** type_info() {
            static app::NotInstruction_NotBoolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotInstruction_NotBoolean__Class**)(modloader::win::memory::resolve_rva(0x0472AEB0));
            }
            return cache;
        }
        inline app::NotInstruction_NotBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotBoolean__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotInstruction", "NotBoolean");
        }
        inline app::NotInstruction_NotBoolean* create() {
            return il2cpp::create_object<app::NotInstruction_NotBoolean>(get_class());
        }
    } // namespace NotInstruction_NotBoolean
} // namespace app::classes::types
