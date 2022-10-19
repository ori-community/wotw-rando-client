#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess {
        inline app::NativeVerletAnimationPostprocess__Class** type_info = (app::NativeVerletAnimationPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04795710));
        inline app::NativeVerletAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::NativeVerletAnimationPostprocess__Class>(type_info, "Moon.Animation", "NativeVerletAnimationPostprocess");
        }
        inline app::NativeVerletAnimationPostprocess* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess
} // namespace app::classes::types
