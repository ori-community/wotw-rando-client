#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamagerAnimator {
        inline app::DamagerAnimator__Class** type_info = (app::DamagerAnimator__Class**)(modloader::win::memory::resolve_rva(0x04716BD0));
        inline app::DamagerAnimator__Class* get_class() {
            return il2cpp::get_class<app::DamagerAnimator__Class>(type_info, "", "DamagerAnimator");
        }
        inline app::DamagerAnimator* create() {
            return il2cpp::create_object<app::DamagerAnimator>(get_class());
        }
    } // namespace DamagerAnimator
} // namespace app::classes::types
