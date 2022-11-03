#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualCharLiftedToNull {
        inline app::EqualInstruction_EqualCharLiftedToNull__Class** type_info = (app::EqualInstruction_EqualCharLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04720820));
        inline app::EqualInstruction_EqualCharLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualCharLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualCharLiftedToNull");
        }
        inline app::EqualInstruction_EqualCharLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualCharLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualCharLiftedToNull
} // namespace app::classes::types
