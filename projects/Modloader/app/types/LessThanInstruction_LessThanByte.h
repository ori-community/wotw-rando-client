#pragma once
#include <Modloader/app/structs/LessThanInstruction_LessThanByte.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanByte {
        inline app::LessThanInstruction_LessThanByte__Class** type_info() {
            static app::LessThanInstruction_LessThanByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanInstruction_LessThanByte__Class**)(modloader::win::memory::resolve_rva(0x047664C0));
            }
            return cache;
        }
        inline app::LessThanInstruction_LessThanByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanByte");
        }
        inline app::LessThanInstruction_LessThanByte* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanByte>(get_class());
        }
    } // namespace LessThanInstruction_LessThanByte
} // namespace app::classes::types
