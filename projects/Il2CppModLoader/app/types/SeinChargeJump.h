#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinChargeJump {
        inline app::SeinChargeJump__Class** type_info = (app::SeinChargeJump__Class**)(modloader::win::memory::resolve_rva(0x0478F340));
        inline app::SeinChargeJump__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJump__Class>(type_info, "", "SeinChargeJump");
        }
        inline app::SeinChargeJump* create() {
            return il2cpp::create_object<app::SeinChargeJump>(get_class());
        }
    } // namespace SeinChargeJump
} // namespace app::classes::types
