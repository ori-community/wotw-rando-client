#pragma once
#include <Modloader/app/structs/InitializeLocalInstruction_ImmutableValue.h>
#include <Modloader/app/structs/InitializeLocalInstruction_ImmutableValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_ImmutableValue {
        inline app::InitializeLocalInstruction_ImmutableValue__Class** type_info() {
            static app::InitializeLocalInstruction_ImmutableValue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InitializeLocalInstruction_ImmutableValue__Class**)(modloader::win::memory::resolve_rva(0x0473EBF8));
            }
            return cache;
        }
        inline app::InitializeLocalInstruction_ImmutableValue__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_ImmutableValue__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "ImmutableValue");
        }
        inline app::InitializeLocalInstruction_ImmutableValue* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_ImmutableValue>(get_class());
        }
    } // namespace InitializeLocalInstruction_ImmutableValue
} // namespace app::classes::types
