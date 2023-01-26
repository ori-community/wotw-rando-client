#pragma once
#include <Modloader/app/structs/MulInstruction_MulInt32.h>
#include <Modloader/app/structs/MulInstruction_MulInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulInstruction_MulInt32 {
        inline app::MulInstruction_MulInt32__Class** type_info() {
            static app::MulInstruction_MulInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulInstruction_MulInt32__Class**)(modloader::win::memory::resolve_rva(0x04715820));
            }
            return cache;
        }
        inline app::MulInstruction_MulInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "MulInstruction", "MulInt32");
        }
        inline app::MulInstruction_MulInt32* create() {
            return il2cpp::create_object<app::MulInstruction_MulInt32>(get_class());
        }
    } // namespace MulInstruction_MulInt32
} // namespace app::classes::types
