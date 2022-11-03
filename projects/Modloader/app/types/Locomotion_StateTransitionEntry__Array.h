#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Locomotion_StateTransitionEntry__Array {
        inline app::Locomotion_StateTransitionEntry__Array__Class** type_info = (app::Locomotion_StateTransitionEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x04787098));
        inline app::Locomotion_StateTransitionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::Locomotion_StateTransitionEntry__Array__Class>(type_info, "Moon", "Locomotion+StateTransitionEntry[]");
        }
        inline app::Locomotion_StateTransitionEntry__Array* create() {
            return il2cpp::create_object<app::Locomotion_StateTransitionEntry__Array>(get_class());
        }
    } // namespace Locomotion_StateTransitionEntry__Array
} // namespace app::classes::types
