#pragma once
#include <Modloader/app/structs/OrInstruction.h>
#include <Modloader/app/structs/OrInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrInstruction {
        inline app::OrInstruction__Class** type_info() {
            static app::OrInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OrInstruction__Class**)(modloader::win::memory::resolve_rva(0x04731EB8));
            }
            return cache;
        }
        inline app::OrInstruction__Class* get_class() {
            return il2cpp::get_class<app::OrInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "OrInstruction");
        }
        inline app::OrInstruction* create() {
            return il2cpp::create_object<app::OrInstruction>(get_class());
        }
    } // namespace OrInstruction
} // namespace app::classes::types
