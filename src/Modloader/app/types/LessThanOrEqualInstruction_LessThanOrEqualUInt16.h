#pragma once
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualUInt16.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualUInt16 {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class** type_info() {
            static app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x0475DF98));
            }
            return cache;
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualUInt16");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualUInt16* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualUInt16>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualUInt16
} // namespace app::classes::types
