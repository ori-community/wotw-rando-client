#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpringAnimator {
        inline app::SpringAnimator__Class** type_info = (app::SpringAnimator__Class**)(modloader::win::memory::resolve_rva(0x0478EA30));
        inline app::SpringAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpringAnimator__Class>(type_info, "", "SpringAnimator");
        }
        inline app::SpringAnimator* create() {
            return il2cpp::create_object<app::SpringAnimator>(get_class());
        }
    } // namespace SpringAnimator
} // namespace app::classes::types
