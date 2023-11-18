#pragma once
#include <Modloader/app/structs/OrInstruction_OrUInt32.h>
#include <Modloader/app/structs/OrInstruction_OrUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrUInt32 {
        inline app::OrInstruction_OrUInt32__Class** type_info() {
            static app::OrInstruction_OrUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrInstruction_OrUInt32__Class**)(modloader::win::memory::resolve_rva(0x04718C00));
            }
            return cache;
        }
        inline app::OrInstruction_OrUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "OrInstruction", "OrUInt32");
        }
        inline app::OrInstruction_OrUInt32* create() {
            return il2cpp::create_object<app::OrInstruction_OrUInt32>(get_class());
        }
    } // namespace OrInstruction_OrUInt32
} // namespace app::classes::types
