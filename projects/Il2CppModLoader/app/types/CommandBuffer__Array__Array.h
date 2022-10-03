#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CommandBuffer__Array__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CommandBuffer__Array__Array__Class** type_info;
        inline app::CommandBuffer__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::CommandBuffer__Array__Array__Class>(type_info, "UnityEngine.Rendering", "CommandBuffer[][]");
        }
        inline app::CommandBuffer__Array__Array* create() {
            return il2cpp::create_object<app::CommandBuffer__Array__Array>(get_class());
        }
    } // namespace CommandBuffer__Array__Array
} // namespace app::classes::types
