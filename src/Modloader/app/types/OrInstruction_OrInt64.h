#pragma once
#include <Modloader/app/structs/OrInstruction_OrInt64.h>
#include <Modloader/app/structs/OrInstruction_OrInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrInt64 {
        inline app::OrInstruction_OrInt64__Class** type_info() {
            static app::OrInstruction_OrInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrInstruction_OrInt64__Class**)(modloader::win::memory::resolve_rva(0x047387A0));
            }
            return cache;
        }
        inline app::OrInstruction_OrInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "OrInstruction", "OrInt64");
        }
        inline app::OrInstruction_OrInt64* create() {
            return il2cpp::create_object<app::OrInstruction_OrInt64>(get_class());
        }
    } // namespace OrInstruction_OrInt64
} // namespace app::classes::types
