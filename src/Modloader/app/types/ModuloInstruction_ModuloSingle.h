#pragma once
#include <Modloader/app/structs/ModuloInstruction_ModuloSingle.h>
#include <Modloader/app/structs/ModuloInstruction_ModuloSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloSingle {
        inline app::ModuloInstruction_ModuloSingle__Class** type_info() {
            static app::ModuloInstruction_ModuloSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModuloInstruction_ModuloSingle__Class**)(modloader::win::memory::resolve_rva(0x0471CD20));
            }
            return cache;
        }
        inline app::ModuloInstruction_ModuloSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloSingle");
        }
        inline app::ModuloInstruction_ModuloSingle* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloSingle>(get_class());
        }
    } // namespace ModuloInstruction_ModuloSingle
} // namespace app::classes::types
