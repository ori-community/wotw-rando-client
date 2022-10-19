#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IButtonInput__Array {
        inline app::IButtonInput__Array__Class** type_info = (app::IButtonInput__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C138));
        inline app::IButtonInput__Array__Class* get_class() {
            return il2cpp::get_class<app::IButtonInput__Array__Class>(type_info, "SmartInput", "IButtonInput[]");
        }
        inline app::IButtonInput__Array* create() {
            return il2cpp::create_object<app::IButtonInput__Array>(get_class());
        }
    } // namespace IButtonInput__Array
} // namespace app::classes::types
