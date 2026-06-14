#pragma once
#include <Modloader/app/structs/CastInstruction.h>
#include <Modloader/app/structs/CastInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CastInstruction {
        inline app::CastInstruction__Class** type_info() {
            static app::CastInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CastInstruction__Class**)(modloader::win::memory::resolve_rva(0x047561F8));
            }
            return cache;
        }
        inline app::CastInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CastInstruction");
        }
        inline app::CastInstruction* create() {
            return il2cpp::create_object<app::CastInstruction>(get_class());
        }
    } // namespace CastInstruction
} // namespace app::classes::types
