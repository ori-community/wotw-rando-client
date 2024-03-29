#pragma once
#include <Modloader/app/structs/InitializeLocalInstruction_ParameterBox.h>
#include <Modloader/app/structs/InitializeLocalInstruction_ParameterBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_ParameterBox {
        inline app::InitializeLocalInstruction_ParameterBox__Class** type_info() {
            static app::InitializeLocalInstruction_ParameterBox__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitializeLocalInstruction_ParameterBox__Class**)(modloader::win::memory::resolve_rva(0x0472FAF0));
            }
            return cache;
        }
        inline app::InitializeLocalInstruction_ParameterBox__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_ParameterBox__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "ParameterBox");
        }
        inline app::InitializeLocalInstruction_ParameterBox* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_ParameterBox>(get_class());
        }
    } // namespace InitializeLocalInstruction_ParameterBox
} // namespace app::classes::types
