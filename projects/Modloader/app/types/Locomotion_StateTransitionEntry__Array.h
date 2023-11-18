#pragma once
#include <Modloader/app/structs/Locomotion_StateTransitionEntry__Array.h>
#include <Modloader/app/structs/Locomotion_StateTransitionEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Locomotion_StateTransitionEntry__Array {
        inline app::Locomotion_StateTransitionEntry__Array__Class** type_info() {
            static app::Locomotion_StateTransitionEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Locomotion_StateTransitionEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x04787098));
            }
            return cache;
        }
        inline app::Locomotion_StateTransitionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::Locomotion_StateTransitionEntry__Array__Class>(type_info(), "Moon", "Locomotion+StateTransitionEntry[]");
        }
        inline app::Locomotion_StateTransitionEntry__Array* create() {
            return il2cpp::create_object<app::Locomotion_StateTransitionEntry__Array>(get_class());
        }
    } // namespace Locomotion_StateTransitionEntry__Array
} // namespace app::classes::types
