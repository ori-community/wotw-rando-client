#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonEffectPoolable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonEffectPoolable__Class** type_info;
        inline app::IMoonEffectPoolable__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectPoolable__Class>(type_info, "", "IMoonEffectPoolable");
        }
    } // namespace IMoonEffectPoolable
} // namespace app::classes::types
