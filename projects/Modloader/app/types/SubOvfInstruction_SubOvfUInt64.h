#pragma once
#include <Modloader/app/structs/SubOvfInstruction_SubOvfUInt64.h>
#include <Modloader/app/structs/SubOvfInstruction_SubOvfUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubOvfInstruction_SubOvfUInt64 {
        inline app::SubOvfInstruction_SubOvfUInt64__Class** type_info() {
            static app::SubOvfInstruction_SubOvfUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubOvfInstruction_SubOvfUInt64__Class**)(modloader::win::memory::resolve_rva(0x0477CED8));
            }
            return cache;
        }
        inline app::SubOvfInstruction_SubOvfUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::SubOvfInstruction_SubOvfUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "SubOvfInstruction", "SubOvfUInt64");
        }
        inline app::SubOvfInstruction_SubOvfUInt64* create() {
            return il2cpp::create_object<app::SubOvfInstruction_SubOvfUInt64>(get_class());
        }
    } // namespace SubOvfInstruction_SubOvfUInt64
} // namespace app::classes::types
