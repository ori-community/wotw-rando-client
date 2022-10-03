#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonSwarmer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonSwarmer__Class** type_info;
        inline app::MoonSwarmer__Class* get_class() {
            return il2cpp::get_class<app::MoonSwarmer__Class>(type_info, "", "MoonSwarmer");
        }
        inline app::MoonSwarmer* create() {
            return il2cpp::create_object<app::MoonSwarmer>(get_class());
        }
        inline app::MoonSwarmer__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonSwarmer__Array>(get_class(), size);
        }
    } // namespace MoonSwarmer
} // namespace app::classes::types
