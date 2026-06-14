#pragma once
#include <Modloader/app/structs/InitializeLocalInstruction_ImmutableRefBox.h>
#include <Modloader/app/structs/InitializeLocalInstruction_ImmutableRefBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_ImmutableRefBox {
        inline app::InitializeLocalInstruction_ImmutableRefBox__Class** type_info() {
            static app::InitializeLocalInstruction_ImmutableRefBox__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitializeLocalInstruction_ImmutableRefBox__Class**)(modloader::win::memory::resolve_rva(0x04714978));
            }
            return cache;
        }
        inline app::InitializeLocalInstruction_ImmutableRefBox__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_ImmutableRefBox__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "ImmutableRefBox");
        }
        inline app::InitializeLocalInstruction_ImmutableRefBox* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_ImmutableRefBox>(get_class());
        }
    } // namespace InitializeLocalInstruction_ImmutableRefBox
} // namespace app::classes::types
