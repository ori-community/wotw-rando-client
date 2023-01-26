#pragma once
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanUInt16.h>
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanUInt16 {
        inline app::GreaterThanInstruction_GreaterThanUInt16__Class** type_info() {
            static app::GreaterThanInstruction_GreaterThanUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanInstruction_GreaterThanUInt16__Class**)(modloader::win::memory::resolve_rva(0x04771BC0));
            }
            return cache;
        }
        inline app::GreaterThanInstruction_GreaterThanUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanUInt16");
        }
        inline app::GreaterThanInstruction_GreaterThanUInt16* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanUInt16>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanUInt16
} // namespace app::classes::types
