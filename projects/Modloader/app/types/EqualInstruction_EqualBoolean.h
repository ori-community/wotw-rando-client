#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualBoolean.h>
#include <Modloader/app/structs/EqualInstruction_EqualBoolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualBoolean {
        inline app::EqualInstruction_EqualBoolean__Class** type_info() {
            static app::EqualInstruction_EqualBoolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualBoolean__Class**)(modloader::win::memory::resolve_rva(0x04757DE8));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualBoolean__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualBoolean");
        }
        inline app::EqualInstruction_EqualBoolean* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualBoolean>(get_class());
        }
    } // namespace EqualInstruction_EqualBoolean
} // namespace app::classes::types
