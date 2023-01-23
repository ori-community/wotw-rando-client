#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EqualInstruction_EqualInt64__Class.h>
#include <Modloader/app/structs/EqualInstruction_EqualInt64.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualInt64 {
        inline app::EqualInstruction_EqualInt64__Class** type_info = (app::EqualInstruction_EqualInt64__Class**)(modloader::win::memory::resolve_rva(0x047423D0));
        inline app::EqualInstruction_EqualInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualInt64");
        }
        inline app::EqualInstruction_EqualInt64* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualInt64>(get_class());
        }
    } // namespace EqualInstruction_EqualInt64
} // namespace app::classes::types
