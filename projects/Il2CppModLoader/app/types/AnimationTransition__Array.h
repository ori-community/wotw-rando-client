#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationTransition__Array {
        inline app::AnimationTransition__Array__Class** type_info = (app::AnimationTransition__Array__Class**)(modloader::win::memory::resolve_rva(0x04724890));
        inline app::AnimationTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTransition__Array__Class>(type_info, "Moon", "AnimationTransition[]");
        }
        inline app::AnimationTransition__Array* create() {
            return il2cpp::create_object<app::AnimationTransition__Array>(get_class());
        }
    } // namespace AnimationTransition__Array
} // namespace app::classes::types
