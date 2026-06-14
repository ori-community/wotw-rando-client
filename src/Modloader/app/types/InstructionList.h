#pragma once
#include <Modloader/app/structs/InstructionList.h>
#include <Modloader/app/structs/InstructionList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstructionList {
        inline app::InstructionList__Class** type_info() {
            static app::InstructionList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstructionList__Class**)(modloader::win::memory::resolve_rva(0x0470A620));
            }
            return cache;
        }
        inline app::InstructionList__Class* get_class() {
            return il2cpp::get_class<app::InstructionList__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InstructionList");
        }
        inline app::InstructionList* create() {
            return il2cpp::create_object<app::InstructionList>(get_class());
        }
    } // namespace InstructionList
} // namespace app::classes::types
