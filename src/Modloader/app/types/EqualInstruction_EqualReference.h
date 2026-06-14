#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualReference.h>
#include <Modloader/app/structs/EqualInstruction_EqualReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualReference {
        inline app::EqualInstruction_EqualReference__Class** type_info() {
            static app::EqualInstruction_EqualReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualReference__Class**)(modloader::win::memory::resolve_rva(0x04770758));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualReference__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualReference__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualReference");
        }
        inline app::EqualInstruction_EqualReference* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualReference>(get_class());
        }
    } // namespace EqualInstruction_EqualReference
} // namespace app::classes::types
