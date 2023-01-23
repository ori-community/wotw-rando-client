#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualCharLiftedToNull__Class.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualCharLiftedToNull.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualCharLiftedToNull {
        inline app::NotEqualInstruction_NotEqualCharLiftedToNull__Class** type_info = (app::NotEqualInstruction_NotEqualCharLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x047907E0));
        inline app::NotEqualInstruction_NotEqualCharLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualCharLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualCharLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualCharLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualCharLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualCharLiftedToNull
} // namespace app::classes::types
