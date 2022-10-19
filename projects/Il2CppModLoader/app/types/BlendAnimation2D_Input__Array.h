#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendAnimation2D_Input__Array {
        inline app::BlendAnimation2D_Input__Array__Class** type_info = (app::BlendAnimation2D_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x0471EE30));
        inline app::BlendAnimation2D_Input__Array__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation2D_Input__Array__Class>(type_info, "Moon", "BlendAnimation2D+Input[]");
        }
        inline app::BlendAnimation2D_Input__Array* create() {
            return il2cpp::create_object<app::BlendAnimation2D_Input__Array>(get_class());
        }
    } // namespace BlendAnimation2D_Input__Array
} // namespace app::classes::types
