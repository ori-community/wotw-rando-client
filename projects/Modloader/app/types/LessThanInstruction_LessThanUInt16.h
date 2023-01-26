#pragma once
#include <Modloader/app/structs/LessThanInstruction_LessThanUInt16.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanUInt16 {
        inline app::LessThanInstruction_LessThanUInt16__Class** type_info() {
            static app::LessThanInstruction_LessThanUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanInstruction_LessThanUInt16__Class**)(modloader::win::memory::resolve_rva(0x04785A58));
            }
            return cache;
        }
        inline app::LessThanInstruction_LessThanUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanUInt16");
        }
        inline app::LessThanInstruction_LessThanUInt16* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanUInt16>(get_class());
        }
    } // namespace LessThanInstruction_LessThanUInt16
} // namespace app::classes::types
