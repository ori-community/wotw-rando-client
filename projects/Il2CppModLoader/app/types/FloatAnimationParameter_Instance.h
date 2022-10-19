#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatAnimationParameter_Instance {
        inline app::FloatAnimationParameter_Instance__Class** type_info = (app::FloatAnimationParameter_Instance__Class**)(modloader::win::memory::resolve_rva(0x0475DB58));
        inline app::FloatAnimationParameter_Instance__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatAnimationParameter_Instance__Class>(type_info, "Moon", "FloatAnimationParameter", "Instance");
        }
        inline app::FloatAnimationParameter_Instance* create() {
            return il2cpp::create_object<app::FloatAnimationParameter_Instance>(get_class());
        }
    } // namespace FloatAnimationParameter_Instance
} // namespace app::classes::types
