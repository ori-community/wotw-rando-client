#pragma once
#include <Modloader/app/structs/ModuloInstruction_ModuloUInt32.h>
#include <Modloader/app/structs/ModuloInstruction_ModuloUInt32__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloUInt32 {
        inline app::ModuloInstruction_ModuloUInt32__Class** type_info() {
            static app::ModuloInstruction_ModuloUInt32__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModuloInstruction_ModuloUInt32__Class**)(modloader::win::memory::resolve_rva(0x04741038));
            }
            return cache;
        }
        inline app::ModuloInstruction_ModuloUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloUInt32__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloUInt32");
        }
        inline app::ModuloInstruction_ModuloUInt32* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloUInt32>(get_class());
        }
    } // namespace ModuloInstruction_ModuloUInt32
} // namespace app::classes::types
