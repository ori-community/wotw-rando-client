#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CommandBuffer {
        inline app::CommandBuffer__Class** type_info = (app::CommandBuffer__Class**)(modloader::win::memory::resolve_rva(0x047309C0));
        inline app::CommandBuffer__Class* get_class() {
            return il2cpp::get_class<app::CommandBuffer__Class>(type_info, "UnityEngine.Rendering", "CommandBuffer");
        }
        inline app::CommandBuffer* create() {
            return il2cpp::create_object<app::CommandBuffer>(get_class());
        }
        inline app::CommandBuffer__Array* create_array(int size) {
            return il2cpp::array_new<app::CommandBuffer__Array>(get_class(), size);
        }
        inline app::CommandBuffer__Array* create_array(const std::vector<app::CommandBuffer*>& items) {
            return il2cpp::array_new<app::CommandBuffer__Array>(get_class(), items);
        }
    } // namespace CommandBuffer
} // namespace app::classes::types
