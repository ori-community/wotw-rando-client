#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComputeBuffer {
        inline app::ComputeBuffer__Class** type_info = (app::ComputeBuffer__Class**)(modloader::win::memory::resolve_rva(0x047314C0));
        inline app::ComputeBuffer__Class* get_class() {
            return il2cpp::get_class<app::ComputeBuffer__Class>(type_info, "UnityEngine", "ComputeBuffer");
        }
        inline app::ComputeBuffer* create() {
            return il2cpp::create_object<app::ComputeBuffer>(get_class());
        }
    } // namespace ComputeBuffer
} // namespace app::classes::types
