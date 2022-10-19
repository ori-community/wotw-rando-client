#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem {
        inline app::TransformAnimatorSystem__Class** type_info = (app::TransformAnimatorSystem__Class**)(modloader::win::memory::resolve_rva(0x0472C620));
        inline app::TransformAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimatorSystem__Class>(type_info, "Moon.Timeline", "TransformAnimatorSystem");
        }
        inline app::TransformAnimatorSystem* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem>(get_class());
        }
    } // namespace TransformAnimatorSystem
} // namespace app::classes::types
