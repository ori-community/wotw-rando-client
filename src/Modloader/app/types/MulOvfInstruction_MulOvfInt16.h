#pragma once
#include <Modloader/app/structs/MulOvfInstruction_MulOvfInt16.h>
#include <Modloader/app/structs/MulOvfInstruction_MulOvfInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulOvfInstruction_MulOvfInt16 {
        inline app::MulOvfInstruction_MulOvfInt16__Class** type_info() {
            static app::MulOvfInstruction_MulOvfInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulOvfInstruction_MulOvfInt16__Class**)(modloader::win::memory::resolve_rva(0x0471D5E8));
            }
            return cache;
        }
        inline app::MulOvfInstruction_MulOvfInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::MulOvfInstruction_MulOvfInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "MulOvfInstruction", "MulOvfInt16");
        }
        inline app::MulOvfInstruction_MulOvfInt16* create() {
            return il2cpp::create_object<app::MulOvfInstruction_MulOvfInt16>(get_class());
        }
    } // namespace MulOvfInstruction_MulOvfInt16
} // namespace app::classes::types
