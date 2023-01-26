#pragma once
#include <Modloader/app/structs/CastToEnumInstruction.h>
#include <Modloader/app/structs/CastToEnumInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CastToEnumInstruction {
        inline app::CastToEnumInstruction__Class** type_info() {
            static app::CastToEnumInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CastToEnumInstruction__Class**)(modloader::win::memory::resolve_rva(0x04784540));
            }
            return cache;
        }
        inline app::CastToEnumInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastToEnumInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CastToEnumInstruction");
        }
        inline app::CastToEnumInstruction* create() {
            return il2cpp::create_object<app::CastToEnumInstruction>(get_class());
        }
    } // namespace CastToEnumInstruction
} // namespace app::classes::types
