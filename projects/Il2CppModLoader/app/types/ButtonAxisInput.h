#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ButtonAxisInput {
        inline app::ButtonAxisInput__Class** type_info = (app::ButtonAxisInput__Class**)(modloader::win::memory::resolve_rva(0x04742E78));
        inline app::ButtonAxisInput__Class* get_class() {
            return il2cpp::get_class<app::ButtonAxisInput__Class>(type_info, "SmartInput", "ButtonAxisInput");
        }
        inline app::ButtonAxisInput* create() {
            return il2cpp::create_object<app::ButtonAxisInput>(get_class());
        }
    } // namespace ButtonAxisInput
} // namespace app::classes::types
