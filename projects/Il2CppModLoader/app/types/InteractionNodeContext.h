#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionNodeContext {
        inline app::InteractionNodeContext__Class** type_info = (app::InteractionNodeContext__Class**)(modloader::win::memory::resolve_rva(0x047172F0));
        inline app::InteractionNodeContext__Class* get_class() {
            return il2cpp::get_class<app::InteractionNodeContext__Class>(type_info, "Moon.InteractionGraph", "InteractionNodeContext");
        }
        inline app::InteractionNodeContext* create() {
            return il2cpp::create_object<app::InteractionNodeContext>(get_class());
        }
    } // namespace InteractionNodeContext
} // namespace app::classes::types
