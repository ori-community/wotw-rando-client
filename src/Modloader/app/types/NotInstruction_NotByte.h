#pragma once
#include <Modloader/app/structs/NotInstruction_NotByte.h>
#include <Modloader/app/structs/NotInstruction_NotByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotByte {
        inline app::NotInstruction_NotByte__Class** type_info() {
            static app::NotInstruction_NotByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotInstruction_NotByte__Class**)(modloader::win::memory::resolve_rva(0x04742E30));
            }
            return cache;
        }
        inline app::NotInstruction_NotByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotInstruction", "NotByte");
        }
        inline app::NotInstruction_NotByte* create() {
            return il2cpp::create_object<app::NotInstruction_NotByte>(get_class());
        }
    } // namespace NotInstruction_NotByte
} // namespace app::classes::types
