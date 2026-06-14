#pragma once
#include <Modloader/app/structs/MulInstruction_MulUInt16.h>
#include <Modloader/app/structs/MulInstruction_MulUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulInstruction_MulUInt16 {
        inline app::MulInstruction_MulUInt16__Class** type_info() {
            static app::MulInstruction_MulUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulInstruction_MulUInt16__Class**)(modloader::win::memory::resolve_rva(0x0470AEB0));
            }
            return cache;
        }
        inline app::MulInstruction_MulUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "MulInstruction", "MulUInt16");
        }
        inline app::MulInstruction_MulUInt16* create() {
            return il2cpp::create_object<app::MulInstruction_MulUInt16>(get_class());
        }
    } // namespace MulInstruction_MulUInt16
} // namespace app::classes::types
