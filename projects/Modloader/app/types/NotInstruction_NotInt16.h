#pragma once
#include <Modloader/app/structs/NotInstruction_NotInt16.h>
#include <Modloader/app/structs/NotInstruction_NotInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotInt16 {
        inline app::NotInstruction_NotInt16__Class** type_info() {
            static app::NotInstruction_NotInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotInstruction_NotInt16__Class**)(modloader::win::memory::resolve_rva(0x0470B9A8));
            }
            return cache;
        }
        inline app::NotInstruction_NotInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotInstruction", "NotInt16");
        }
        inline app::NotInstruction_NotInt16* create() {
            return il2cpp::create_object<app::NotInstruction_NotInt16>(get_class());
        }
    } // namespace NotInstruction_NotInt16
} // namespace app::classes::types
