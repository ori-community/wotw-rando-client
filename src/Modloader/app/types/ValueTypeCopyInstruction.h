#pragma once
#include <Modloader/app/structs/ValueTypeCopyInstruction.h>
#include <Modloader/app/structs/ValueTypeCopyInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueTypeCopyInstruction {
        inline app::ValueTypeCopyInstruction__Class** type_info() {
            static app::ValueTypeCopyInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValueTypeCopyInstruction__Class**)(modloader::win::memory::resolve_rva(0x04787028));
            }
            return cache;
        }
        inline app::ValueTypeCopyInstruction__Class* get_class() {
            return il2cpp::get_class<app::ValueTypeCopyInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "ValueTypeCopyInstruction");
        }
        inline app::ValueTypeCopyInstruction* create() {
            return il2cpp::create_object<app::ValueTypeCopyInstruction>(get_class());
        }
    } // namespace ValueTypeCopyInstruction
} // namespace app::classes::types
