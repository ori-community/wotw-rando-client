#pragma once
#include <Modloader/app/structs/LessThanInstruction_LessThanSingle.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanSingle {
        inline app::LessThanInstruction_LessThanSingle__Class** type_info() {
            static app::LessThanInstruction_LessThanSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanInstruction_LessThanSingle__Class**)(modloader::win::memory::resolve_rva(0x047428F8));
            }
            return cache;
        }
        inline app::LessThanInstruction_LessThanSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanSingle");
        }
        inline app::LessThanInstruction_LessThanSingle* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanSingle>(get_class());
        }
    } // namespace LessThanInstruction_LessThanSingle
} // namespace app::classes::types
