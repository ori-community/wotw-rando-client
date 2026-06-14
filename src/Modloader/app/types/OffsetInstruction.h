#pragma once
#include <Modloader/app/structs/OffsetInstruction.h>
#include <Modloader/app/structs/OffsetInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetInstruction {
        inline app::OffsetInstruction__Class** type_info() {
            static app::OffsetInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OffsetInstruction__Class**)(modloader::win::memory::resolve_rva(0x04773EA8));
            }
            return cache;
        }
        inline app::OffsetInstruction__Class* get_class() {
            return il2cpp::get_class<app::OffsetInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "OffsetInstruction");
        }
        inline app::OffsetInstruction* create() {
            return il2cpp::create_object<app::OffsetInstruction>(get_class());
        }
    } // namespace OffsetInstruction
} // namespace app::classes::types
