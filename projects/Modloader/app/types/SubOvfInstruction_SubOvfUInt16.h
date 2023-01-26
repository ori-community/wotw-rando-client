#pragma once
#include <Modloader/app/structs/SubOvfInstruction_SubOvfUInt16.h>
#include <Modloader/app/structs/SubOvfInstruction_SubOvfUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubOvfInstruction_SubOvfUInt16 {
        inline app::SubOvfInstruction_SubOvfUInt16__Class** type_info() {
            static app::SubOvfInstruction_SubOvfUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubOvfInstruction_SubOvfUInt16__Class**)(modloader::win::memory::resolve_rva(0x0475F8D0));
            }
            return cache;
        }
        inline app::SubOvfInstruction_SubOvfUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::SubOvfInstruction_SubOvfUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "SubOvfInstruction", "SubOvfUInt16");
        }
        inline app::SubOvfInstruction_SubOvfUInt16* create() {
            return il2cpp::create_object<app::SubOvfInstruction_SubOvfUInt16>(get_class());
        }
    } // namespace SubOvfInstruction_SubOvfUInt16
} // namespace app::classes::types
