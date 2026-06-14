#pragma once
#include <Modloader/app/structs/ModuloInstruction.h>
#include <Modloader/app/structs/ModuloInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModuloInstruction {
        inline app::ModuloInstruction__Class** type_info() {
            static app::ModuloInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ModuloInstruction__Class**)(modloader::win::memory::resolve_rva(0x04750408));
            }
            return cache;
        }
        inline app::ModuloInstruction__Class* get_class() {
            return il2cpp::get_class<app::ModuloInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ModuloInstruction");
        }
        inline app::ModuloInstruction* create() {
            return il2cpp::create_object<app::ModuloInstruction>(get_class());
        }
    } // namespace ModuloInstruction
} // namespace app::classes::types
