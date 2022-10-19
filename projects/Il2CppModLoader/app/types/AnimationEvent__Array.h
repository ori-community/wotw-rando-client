#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationEvent__Array {
        inline app::AnimationEvent__Array__Class** type_info = (app::AnimationEvent__Array__Class**)(modloader::win::memory::resolve_rva(0x04703B10));
        inline app::AnimationEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationEvent__Array__Class>(type_info, "UnityEngine", "AnimationEvent[]");
        }
        inline app::AnimationEvent__Array* create() {
            return il2cpp::create_object<app::AnimationEvent__Array>(get_class());
        }
    } // namespace AnimationEvent__Array
} // namespace app::classes::types
