#pragma once
#include <Modloader/app/structs/MethodInfoCallInstruction.h>
#include <Modloader/app/structs/MethodInfoCallInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodInfoCallInstruction {
        inline app::MethodInfoCallInstruction__Class** type_info() {
            static app::MethodInfoCallInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodInfoCallInstruction__Class**)(modloader::win::memory::resolve_rva(0x047857E8));
            }
            return cache;
        }
        inline app::MethodInfoCallInstruction__Class* get_class() {
            return il2cpp::get_class<app::MethodInfoCallInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "MethodInfoCallInstruction");
        }
        inline app::MethodInfoCallInstruction* create() {
            return il2cpp::create_object<app::MethodInfoCallInstruction>(get_class());
        }
    } // namespace MethodInfoCallInstruction
} // namespace app::classes::types
