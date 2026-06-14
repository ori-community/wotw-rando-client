#pragma once
#include <Modloader/app/structs/ModuloInstruction_ModuloDouble.h>
#include <Modloader/app/structs/ModuloInstruction_ModuloDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloDouble {
        inline app::ModuloInstruction_ModuloDouble__Class** type_info() {
            static app::ModuloInstruction_ModuloDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModuloInstruction_ModuloDouble__Class**)(modloader::win::memory::resolve_rva(0x04715AA8));
            }
            return cache;
        }
        inline app::ModuloInstruction_ModuloDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloDouble__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloDouble");
        }
        inline app::ModuloInstruction_ModuloDouble* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloDouble>(get_class());
        }
    } // namespace ModuloInstruction_ModuloDouble
} // namespace app::classes::types
