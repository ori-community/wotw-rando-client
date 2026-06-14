#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualUInt16.h>
#include <Modloader/app/structs/EqualInstruction_EqualUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualUInt16 {
        inline app::EqualInstruction_EqualUInt16__Class** type_info() {
            static app::EqualInstruction_EqualUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x0478BBC0));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualUInt16");
        }
        inline app::EqualInstruction_EqualUInt16* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualUInt16>(get_class());
        }
    } // namespace EqualInstruction_EqualUInt16
} // namespace app::classes::types
