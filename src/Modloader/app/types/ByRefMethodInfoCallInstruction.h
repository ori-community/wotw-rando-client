#pragma once
#include <Modloader/app/structs/ByRefMethodInfoCallInstruction.h>
#include <Modloader/app/structs/ByRefMethodInfoCallInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByRefMethodInfoCallInstruction {
        inline app::ByRefMethodInfoCallInstruction__Class** type_info() {
            static app::ByRefMethodInfoCallInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByRefMethodInfoCallInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470DAB8));
            }
            return cache;
        }
        inline app::ByRefMethodInfoCallInstruction__Class* get_class() {
            return il2cpp::get_class<app::ByRefMethodInfoCallInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ByRefMethodInfoCallInstruction");
        }
        inline app::ByRefMethodInfoCallInstruction* create() {
            return il2cpp::create_object<app::ByRefMethodInfoCallInstruction>(get_class());
        }
    } // namespace ByRefMethodInfoCallInstruction
} // namespace app::classes::types
