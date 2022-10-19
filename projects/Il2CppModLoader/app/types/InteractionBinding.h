#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionBinding {
        inline app::InteractionBinding__Class** type_info = (app::InteractionBinding__Class**)(modloader::win::memory::resolve_rva(0x04733B98));
        inline app::InteractionBinding__Class* get_class() {
            return il2cpp::get_class<app::InteractionBinding__Class>(type_info, "Moon.InteractionGraph", "InteractionBinding");
        }
        inline app::InteractionBinding* create() {
            return il2cpp::create_object<app::InteractionBinding>(get_class());
        }
    } // namespace InteractionBinding
} // namespace app::classes::types
