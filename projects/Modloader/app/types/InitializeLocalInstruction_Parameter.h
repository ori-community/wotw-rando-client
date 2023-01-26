#pragma once
#include <Modloader/app/structs/InitializeLocalInstruction_Parameter.h>
#include <Modloader/app/structs/InitializeLocalInstruction_Parameter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_Parameter {
        inline app::InitializeLocalInstruction_Parameter__Class** type_info() {
            static app::InitializeLocalInstruction_Parameter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitializeLocalInstruction_Parameter__Class**)(modloader::win::memory::resolve_rva(0x047897E0));
            }
            return cache;
        }
        inline app::InitializeLocalInstruction_Parameter__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_Parameter__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "Parameter");
        }
        inline app::InitializeLocalInstruction_Parameter* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_Parameter>(get_class());
        }
    } // namespace InitializeLocalInstruction_Parameter
} // namespace app::classes::types
