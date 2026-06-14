#pragma once
#include <Modloader/app/structs/ModuloInstruction_ModuloUInt16.h>
#include <Modloader/app/structs/ModuloInstruction_ModuloUInt16__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction_ModuloUInt16 {
        inline app::ModuloInstruction_ModuloUInt16__Class** type_info() {
            static app::ModuloInstruction_ModuloUInt16__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModuloInstruction_ModuloUInt16__Class**)(modloader::win::memory::resolve_rva(0x047647C0));
            }
            return cache;
        }
        inline app::ModuloInstruction_ModuloUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::ModuloInstruction_ModuloUInt16__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ModuloInstruction", "ModuloUInt16");
        }
        inline app::ModuloInstruction_ModuloUInt16* create() {
            return il2cpp::create_object<app::ModuloInstruction_ModuloUInt16>(get_class());
        }
    } // namespace ModuloInstruction_ModuloUInt16
} // namespace app::classes::types
