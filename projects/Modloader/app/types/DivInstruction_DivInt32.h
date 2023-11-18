#pragma once
#include <Modloader/app/structs/DivInstruction_DivInt32.h>
#include <Modloader/app/structs/DivInstruction_DivInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DivInstruction_DivInt32 {
        inline app::DivInstruction_DivInt32__Class** type_info() {
            static app::DivInstruction_DivInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DivInstruction_DivInt32__Class**)(modloader::win::memory::resolve_rva(0x04762B58));
            }
            return cache;
        }
        inline app::DivInstruction_DivInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "DivInstruction", "DivInt32");
        }
        inline app::DivInstruction_DivInt32* create() {
            return il2cpp::create_object<app::DivInstruction_DivInt32>(get_class());
        }
    } // namespace DivInstruction_DivInt32
} // namespace app::classes::types
