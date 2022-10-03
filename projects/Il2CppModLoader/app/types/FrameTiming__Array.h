#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameTiming__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameTiming__Array__Class** type_info;
        inline app::FrameTiming__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameTiming__Array__Class>(type_info, "UnityEngine", "FrameTiming[]");
        }
        inline app::FrameTiming__Array* create() {
            return il2cpp::create_object<app::FrameTiming__Array>(get_class());
        }
    } // namespace FrameTiming__Array
} // namespace app::classes::types
