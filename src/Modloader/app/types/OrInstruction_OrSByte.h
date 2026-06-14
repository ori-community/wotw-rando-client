#pragma once
#include <Modloader/app/structs/OrInstruction_OrSByte.h>
#include <Modloader/app/structs/OrInstruction_OrSByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrSByte {
        inline app::OrInstruction_OrSByte__Class** type_info() {
            static app::OrInstruction_OrSByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrInstruction_OrSByte__Class**)(modloader::win::memory::resolve_rva(0x04782FE0));
            }
            return cache;
        }
        inline app::OrInstruction_OrSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrSByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "OrInstruction", "OrSByte");
        }
        inline app::OrInstruction_OrSByte* create() {
            return il2cpp::create_object<app::OrInstruction_OrSByte>(get_class());
        }
    } // namespace OrInstruction_OrSByte
} // namespace app::classes::types
