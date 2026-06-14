#pragma once
#include <Modloader/app/structs/OrInstruction_OrUInt16.h>
#include <Modloader/app/structs/OrInstruction_OrUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrUInt16 {
        inline app::OrInstruction_OrUInt16__Class** type_info() {
            static app::OrInstruction_OrUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrInstruction_OrUInt16__Class**)(modloader::win::memory::resolve_rva(0x047843E0));
            }
            return cache;
        }
        inline app::OrInstruction_OrUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "OrInstruction", "OrUInt16");
        }
        inline app::OrInstruction_OrUInt16* create() {
            return il2cpp::create_object<app::OrInstruction_OrUInt16>(get_class());
        }
    } // namespace OrInstruction_OrUInt16
} // namespace app::classes::types
