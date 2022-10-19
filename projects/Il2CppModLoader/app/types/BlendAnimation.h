#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlendAnimation {
        inline app::BlendAnimation__Class** type_info = (app::BlendAnimation__Class**)(modloader::win::memory::resolve_rva(0x0473FF00));
        inline app::BlendAnimation__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation__Class>(type_info, "Moon", "BlendAnimation");
        }
        inline app::BlendAnimation* create() {
            return il2cpp::create_object<app::BlendAnimation>(get_class());
        }
    } // namespace BlendAnimation
} // namespace app::classes::types
