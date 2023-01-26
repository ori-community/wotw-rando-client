#pragma once
#include <Modloader/app/structs/Instruction__Array__Array__Array.h>
#include <Modloader/app/structs/Instruction__Array__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Instruction__Array__Array__Array {
        inline app::Instruction__Array__Array__Array__Class** type_info() {
            static app::Instruction__Array__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Instruction__Array__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04762590));
            }
            return cache;
        }
        inline app::Instruction__Array__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Instruction__Array__Array__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "Instruction[][][]");
        }
        inline app::Instruction__Array__Array__Array* create() {
            return il2cpp::create_object<app::Instruction__Array__Array__Array>(get_class());
        }
    } // namespace Instruction__Array__Array__Array
} // namespace app::classes::types
