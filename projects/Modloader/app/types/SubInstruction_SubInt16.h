#pragma once
#include <Modloader/app/structs/SubInstruction_SubInt16.h>
#include <Modloader/app/structs/SubInstruction_SubInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubInstruction_SubInt16 {
        inline app::SubInstruction_SubInt16__Class** type_info() {
            static app::SubInstruction_SubInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubInstruction_SubInt16__Class**)(modloader::win::memory::resolve_rva(0x04719718));
            }
            return cache;
        }
        inline app::SubInstruction_SubInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "SubInstruction", "SubInt16");
        }
        inline app::SubInstruction_SubInt16* create() {
            return il2cpp::create_object<app::SubInstruction_SubInt16>(get_class());
        }
    } // namespace SubInstruction_SubInt16
} // namespace app::classes::types
