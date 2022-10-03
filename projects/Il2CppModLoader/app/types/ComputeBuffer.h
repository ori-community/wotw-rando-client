#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComputeBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ComputeBuffer__Class** type_info;
        inline app::ComputeBuffer__Class* get_class() {
            return il2cpp::get_class<app::ComputeBuffer__Class>(type_info, "UnityEngine", "ComputeBuffer");
        }
        inline app::ComputeBuffer* create() {
            return il2cpp::create_object<app::ComputeBuffer>(get_class());
        }
    } // namespace ComputeBuffer
} // namespace app::classes::types
