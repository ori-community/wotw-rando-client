#pragma once
#include <Modloader/app/structs/MulInstruction_MulInt16.h>
#include <Modloader/app/structs/MulInstruction_MulInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulInstruction_MulInt16 {
        inline app::MulInstruction_MulInt16__Class** type_info() {
            static app::MulInstruction_MulInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulInstruction_MulInt16__Class**)(modloader::win::memory::resolve_rva(0x04709EB0));
            }
            return cache;
        }
        inline app::MulInstruction_MulInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "MulInstruction", "MulInt16");
        }
        inline app::MulInstruction_MulInt16* create() {
            return il2cpp::create_object<app::MulInstruction_MulInt16>(get_class());
        }
    } // namespace MulInstruction_MulInt16
} // namespace app::classes::types
