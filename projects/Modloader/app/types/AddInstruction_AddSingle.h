#pragma once
#include <Modloader/app/structs/AddInstruction_AddSingle.h>
#include <Modloader/app/structs/AddInstruction_AddSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddSingle {
        inline app::AddInstruction_AddSingle__Class** type_info() {
            static app::AddInstruction_AddSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddInstruction_AddSingle__Class**)(modloader::win::memory::resolve_rva(0x0470F040));
            }
            return cache;
        }
        inline app::AddInstruction_AddSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AddInstruction", "AddSingle");
        }
        inline app::AddInstruction_AddSingle* create() {
            return il2cpp::create_object<app::AddInstruction_AddSingle>(get_class());
        }
    } // namespace AddInstruction_AddSingle
} // namespace app::classes::types
