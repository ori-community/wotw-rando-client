#pragma once
#include <Modloader/app/structs/LessThanInstruction_LessThanSByte.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanSByte__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanSByte {
        inline app::LessThanInstruction_LessThanSByte__Class** type_info() {
            static app::LessThanInstruction_LessThanSByte__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanInstruction_LessThanSByte__Class**)(modloader::win::memory::resolve_rva(0x047715B8));
            }
            return cache;
        }
        inline app::LessThanInstruction_LessThanSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanSByte__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanSByte");
        }
        inline app::LessThanInstruction_LessThanSByte* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanSByte>(get_class());
        }
    } // namespace LessThanInstruction_LessThanSByte
} // namespace app::classes::types
