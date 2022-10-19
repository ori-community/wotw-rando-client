#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Water3UnderwaterEffect {
        inline app::Water3UnderwaterEffect__Class** type_info = (app::Water3UnderwaterEffect__Class**)(modloader::win::memory::resolve_rva(0x04777708));
        inline app::Water3UnderwaterEffect__Class* get_class() {
            return il2cpp::get_class<app::Water3UnderwaterEffect__Class>(type_info, "", "Water3UnderwaterEffect");
        }
        inline app::Water3UnderwaterEffect* create() {
            return il2cpp::create_object<app::Water3UnderwaterEffect>(get_class());
        }
    } // namespace Water3UnderwaterEffect
} // namespace app::classes::types
