#pragma once
#include <Modloader/app/structs/SubOvfInstruction_SubOvfInt64.h>
#include <Modloader/app/structs/SubOvfInstruction_SubOvfInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubOvfInstruction_SubOvfInt64 {
        inline app::SubOvfInstruction_SubOvfInt64__Class** type_info() {
            static app::SubOvfInstruction_SubOvfInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubOvfInstruction_SubOvfInt64__Class**)(modloader::win::memory::resolve_rva(0x04706410));
            }
            return cache;
        }
        inline app::SubOvfInstruction_SubOvfInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::SubOvfInstruction_SubOvfInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "SubOvfInstruction", "SubOvfInt64");
        }
        inline app::SubOvfInstruction_SubOvfInt64* create() {
            return il2cpp::create_object<app::SubOvfInstruction_SubOvfInt64>(get_class());
        }
    } // namespace SubOvfInstruction_SubOvfInt64
} // namespace app::classes::types
