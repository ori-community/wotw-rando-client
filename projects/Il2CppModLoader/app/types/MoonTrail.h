#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrail {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTrail__Class** type_info;
        inline app::MoonTrail__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail__Class>(type_info, "Moon", "MoonTrail");
        }
        inline app::MoonTrail* create() {
            return il2cpp::create_object<app::MoonTrail>(get_class());
        }
        inline app::MoonTrail__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrail__Array>(get_class(), size);
        }
        inline app::MoonTrail__Array* create_array(const std::vector<app::MoonTrail*>& items) {
            return il2cpp::array_new<app::MoonTrail__Array>(get_class(), items);
        }
    } // namespace MoonTrail
} // namespace app::classes::types
