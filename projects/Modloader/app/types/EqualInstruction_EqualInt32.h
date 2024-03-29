#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualInt32.h>
#include <Modloader/app/structs/EqualInstruction_EqualInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualInt32 {
        inline app::EqualInstruction_EqualInt32__Class** type_info() {
            static app::EqualInstruction_EqualInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0477D788));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualInt32");
        }
        inline app::EqualInstruction_EqualInt32* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualInt32>(get_class());
        }
    } // namespace EqualInstruction_EqualInt32
} // namespace app::classes::types
