#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateSingle {
        inline app::NegateInstruction_NegateSingle__Class** type_info = (app::NegateInstruction_NegateSingle__Class**)(modloader::win::memory::resolve_rva(0x047163D0));
        inline app::NegateInstruction_NegateSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateSingle");
        }
        inline app::NegateInstruction_NegateSingle* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateSingle>(get_class());
        }
    } // namespace NegateInstruction_NegateSingle
} // namespace app::classes::types
