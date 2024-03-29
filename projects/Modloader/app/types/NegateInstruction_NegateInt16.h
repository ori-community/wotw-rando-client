#pragma once
#include <Modloader/app/structs/NegateInstruction_NegateInt16.h>
#include <Modloader/app/structs/NegateInstruction_NegateInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateInt16 {
        inline app::NegateInstruction_NegateInt16__Class** type_info() {
            static app::NegateInstruction_NegateInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegateInstruction_NegateInt16__Class**)(modloader::win::memory::resolve_rva(0x04789F20));
            }
            return cache;
        }
        inline app::NegateInstruction_NegateInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateInt16");
        }
        inline app::NegateInstruction_NegateInt16* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateInt16>(get_class());
        }
    } // namespace NegateInstruction_NegateInt16
} // namespace app::classes::types
