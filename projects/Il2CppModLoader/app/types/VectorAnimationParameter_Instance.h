#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VectorAnimationParameter_Instance {
        inline app::VectorAnimationParameter_Instance__Class** type_info = (app::VectorAnimationParameter_Instance__Class**)(modloader::win::memory::resolve_rva(0x04776870));
        inline app::VectorAnimationParameter_Instance__Class* get_class() {
            return il2cpp::get_nested_class<app::VectorAnimationParameter_Instance__Class>(type_info, "Moon", "VectorAnimationParameter", "Instance");
        }
        inline app::VectorAnimationParameter_Instance* create() {
            return il2cpp::create_object<app::VectorAnimationParameter_Instance>(get_class());
        }
    } // namespace VectorAnimationParameter_Instance
} // namespace app::classes::types
