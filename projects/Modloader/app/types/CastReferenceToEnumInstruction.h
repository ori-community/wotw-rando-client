#pragma once
#include <Modloader/app/structs/CastReferenceToEnumInstruction.h>
#include <Modloader/app/structs/CastReferenceToEnumInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CastReferenceToEnumInstruction {
        inline app::CastReferenceToEnumInstruction__Class** type_info() {
            static app::CastReferenceToEnumInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CastReferenceToEnumInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478EB20));
            }
            return cache;
        }
        inline app::CastReferenceToEnumInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastReferenceToEnumInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CastReferenceToEnumInstruction");
        }
        inline app::CastReferenceToEnumInstruction* create() {
            return il2cpp::create_object<app::CastReferenceToEnumInstruction>(get_class());
        }
    } // namespace CastReferenceToEnumInstruction
} // namespace app::classes::types
