#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CommandBuffer__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CommandBuffer__Array__Class** type_info;
        inline app::CommandBuffer__Array__Class* get_class() {
            return il2cpp::get_class<app::CommandBuffer__Array__Class>(type_info, "UnityEngine.Rendering", "CommandBuffer[]");
        }
        inline app::CommandBuffer__Array* create() {
            return il2cpp::create_object<app::CommandBuffer__Array>(get_class());
        }
        inline app::CommandBuffer__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::CommandBuffer__Array__Array>(get_class(), size);
        }
        inline app::CommandBuffer__Array__Array* create_array(const std::vector<app::CommandBuffer__Array*>& items) {
            return il2cpp::array_new<app::CommandBuffer__Array__Array>(get_class(), items);
        }
    } // namespace CommandBuffer__Array
} // namespace app::classes::types
