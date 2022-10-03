#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Music {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Music__Class** type_info;
        inline app::Music__Class* get_class() {
            return il2cpp::get_class<app::Music__Class>(type_info, "Core", "Music");
        }
        inline app::Music* create() {
            return il2cpp::create_object<app::Music>(get_class());
        }
    } // namespace Music
} // namespace app::classes::types
