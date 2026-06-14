#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualUInt32.h>
#include <Modloader/app/structs/EqualInstruction_EqualUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualUInt32 {
        inline app::EqualInstruction_EqualUInt32__Class** type_info() {
            static app::EqualInstruction_EqualUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualUInt32__Class**)(modloader::win::memory::resolve_rva(0x04702C50));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualUInt32");
        }
        inline app::EqualInstruction_EqualUInt32* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualUInt32>(get_class());
        }
    } // namespace EqualInstruction_EqualUInt32
} // namespace app::classes::types
