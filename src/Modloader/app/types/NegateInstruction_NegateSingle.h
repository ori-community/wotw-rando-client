#pragma once
#include <Modloader/app/structs/NegateInstruction_NegateSingle.h>
#include <Modloader/app/structs/NegateInstruction_NegateSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateSingle {
        inline app::NegateInstruction_NegateSingle__Class** type_info() {
            static app::NegateInstruction_NegateSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegateInstruction_NegateSingle__Class**)(modloader::win::memory::resolve_rva(0x047163D0));
            }
            return cache;
        }
        inline app::NegateInstruction_NegateSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateSingle");
        }
        inline app::NegateInstruction_NegateSingle* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateSingle>(get_class());
        }
    } // namespace NegateInstruction_NegateSingle
} // namespace app::classes::types
