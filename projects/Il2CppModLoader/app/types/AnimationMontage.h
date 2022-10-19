#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMontage {
        inline app::AnimationMontage__Class** type_info = (app::AnimationMontage__Class**)(modloader::win::memory::resolve_rva(0x0472F048));
        inline app::AnimationMontage__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontage__Class>(type_info, "Moon", "AnimationMontage");
        }
        inline app::AnimationMontage* create() {
            return il2cpp::create_object<app::AnimationMontage>(get_class());
        }
    } // namespace AnimationMontage
} // namespace app::classes::types
