#pragma once
#include <Modloader/app/structs/InitializeLocalInstruction_ImmutableBox.h>
#include <Modloader/app/structs/InitializeLocalInstruction_ImmutableBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_ImmutableBox {
        inline app::InitializeLocalInstruction_ImmutableBox__Class** type_info() {
            static app::InitializeLocalInstruction_ImmutableBox__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitializeLocalInstruction_ImmutableBox__Class**)(modloader::win::memory::resolve_rva(0x04726910));
            }
            return cache;
        }
        inline app::InitializeLocalInstruction_ImmutableBox__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_ImmutableBox__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "ImmutableBox");
        }
        inline app::InitializeLocalInstruction_ImmutableBox* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_ImmutableBox>(get_class());
        }
    } // namespace InitializeLocalInstruction_ImmutableBox
} // namespace app::classes::types
