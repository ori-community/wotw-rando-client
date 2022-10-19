#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectBlendAnimation {
        inline app::DirectBlendAnimation__Class** type_info = (app::DirectBlendAnimation__Class**)(modloader::win::memory::resolve_rva(0x0472A9B0));
        inline app::DirectBlendAnimation__Class* get_class() {
            return il2cpp::get_class<app::DirectBlendAnimation__Class>(type_info, "Moon", "DirectBlendAnimation");
        }
        inline app::DirectBlendAnimation* create() {
            return il2cpp::create_object<app::DirectBlendAnimation>(get_class());
        }
    } // namespace DirectBlendAnimation
} // namespace app::classes::types
