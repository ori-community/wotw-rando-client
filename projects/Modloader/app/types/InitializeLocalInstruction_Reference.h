#pragma once
#include <Modloader/app/structs/InitializeLocalInstruction_Reference.h>
#include <Modloader/app/structs/InitializeLocalInstruction_Reference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_Reference {
        inline app::InitializeLocalInstruction_Reference__Class** type_info() {
            static app::InitializeLocalInstruction_Reference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitializeLocalInstruction_Reference__Class**)(modloader::win::memory::resolve_rva(0x0477DB68));
            }
            return cache;
        }
        inline app::InitializeLocalInstruction_Reference__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_Reference__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "Reference");
        }
        inline app::InitializeLocalInstruction_Reference* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_Reference>(get_class());
        }
    } // namespace InitializeLocalInstruction_Reference
} // namespace app::classes::types
