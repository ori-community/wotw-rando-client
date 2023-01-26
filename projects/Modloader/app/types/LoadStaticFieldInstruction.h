#pragma once
#include <Modloader/app/structs/LoadStaticFieldInstruction.h>
#include <Modloader/app/structs/LoadStaticFieldInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadStaticFieldInstruction {
        inline app::LoadStaticFieldInstruction__Class** type_info() {
            static app::LoadStaticFieldInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadStaticFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470DD50));
            }
            return cache;
        }
        inline app::LoadStaticFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadStaticFieldInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LoadStaticFieldInstruction");
        }
        inline app::LoadStaticFieldInstruction* create() {
            return il2cpp::create_object<app::LoadStaticFieldInstruction>(get_class());
        }
    } // namespace LoadStaticFieldInstruction
} // namespace app::classes::types
