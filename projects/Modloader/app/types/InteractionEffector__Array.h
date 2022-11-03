#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionEffector__Array {
        inline app::InteractionEffector__Array__Class** type_info = (app::InteractionEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x047474A0));
        inline app::InteractionEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionEffector__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionEffector[]");
        }
        inline app::InteractionEffector__Array* create() {
            return il2cpp::create_object<app::InteractionEffector__Array>(get_class());
        }
    } // namespace InteractionEffector__Array
} // namespace app::classes::types
