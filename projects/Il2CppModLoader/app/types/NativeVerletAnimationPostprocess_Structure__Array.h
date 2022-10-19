#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess_Structure__Array {
        inline app::NativeVerletAnimationPostprocess_Structure__Array__Class** type_info = (app::NativeVerletAnimationPostprocess_Structure__Array__Class**)(modloader::win::memory::resolve_rva(0x04753B40));
        inline app::NativeVerletAnimationPostprocess_Structure__Array__Class* get_class() {
            return il2cpp::get_class<app::NativeVerletAnimationPostprocess_Structure__Array__Class>(type_info, "Moon.Animation", "NativeVerletAnimationPostprocess+Structure[]");
        }
        inline app::NativeVerletAnimationPostprocess_Structure__Array* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess_Structure__Array>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess_Structure__Array
} // namespace app::classes::types
