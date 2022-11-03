#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionTarget__Array {
        inline app::InteractionTarget__Array__Class** type_info = (app::InteractionTarget__Array__Class**)(modloader::win::memory::resolve_rva(0x0473D8F8));
        inline app::InteractionTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTarget__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionTarget[]");
        }
        inline app::InteractionTarget__Array* create() {
            return il2cpp::create_object<app::InteractionTarget__Array>(get_class());
        }
    } // namespace InteractionTarget__Array
} // namespace app::classes::types
