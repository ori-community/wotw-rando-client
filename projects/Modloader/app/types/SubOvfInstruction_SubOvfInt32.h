#pragma once
#include <Modloader/app/structs/SubOvfInstruction_SubOvfInt32.h>
#include <Modloader/app/structs/SubOvfInstruction_SubOvfInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubOvfInstruction_SubOvfInt32 {
        inline app::SubOvfInstruction_SubOvfInt32__Class** type_info() {
            static app::SubOvfInstruction_SubOvfInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubOvfInstruction_SubOvfInt32__Class**)(modloader::win::memory::resolve_rva(0x04729870));
            }
            return cache;
        }
        inline app::SubOvfInstruction_SubOvfInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::SubOvfInstruction_SubOvfInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "SubOvfInstruction", "SubOvfInt32");
        }
        inline app::SubOvfInstruction_SubOvfInt32* create() {
            return il2cpp::create_object<app::SubOvfInstruction_SubOvfInt32>(get_class());
        }
    } // namespace SubOvfInstruction_SubOvfInt32
} // namespace app::classes::types
