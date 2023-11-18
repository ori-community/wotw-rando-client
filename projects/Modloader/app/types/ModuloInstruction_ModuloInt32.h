#pragma once
#include <Modloader/app/structs/ModuloInstruction_ModuloInt32.h>
#include <Modloader/app/structs/ModuloInstruction_ModuloInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloInt32 {
        inline app::ModuloInstruction_ModuloInt32__Class** type_info() {
            static app::ModuloInstruction_ModuloInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModuloInstruction_ModuloInt32__Class**)(modloader::win::memory::resolve_rva(0x0471A228));
            }
            return cache;
        }
        inline app::ModuloInstruction_ModuloInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloInt32");
        }
        inline app::ModuloInstruction_ModuloInt32* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloInt32>(get_class());
        }
    } // namespace ModuloInstruction_ModuloInt32
} // namespace app::classes::types
