#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyRespawner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyRespawner__Class** type_info;
        inline app::LegacyRespawner__Class* get_class() {
            return il2cpp::get_class<app::LegacyRespawner__Class>(type_info, "", "LegacyRespawner");
        }
        inline app::LegacyRespawner* create() {
            return il2cpp::create_object<app::LegacyRespawner>(get_class());
        }
        inline app::LegacyRespawner__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyRespawner__Array>(get_class(), size);
        }
    } // namespace LegacyRespawner
} // namespace app::classes::types
