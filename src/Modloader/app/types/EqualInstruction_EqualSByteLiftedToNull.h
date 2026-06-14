#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualSByteLiftedToNull.h>
#include <Modloader/app/structs/EqualInstruction_EqualSByteLiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualSByteLiftedToNull {
        inline app::EqualInstruction_EqualSByteLiftedToNull__Class** type_info() {
            static app::EqualInstruction_EqualSByteLiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualSByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04772408));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualSByteLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualSByteLiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualSByteLiftedToNull");
        }
        inline app::EqualInstruction_EqualSByteLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualSByteLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualSByteLiftedToNull
} // namespace app::classes::types
