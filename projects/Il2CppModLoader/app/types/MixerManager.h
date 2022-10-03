#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MixerManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MixerManager__Class** type_info;
        inline app::MixerManager__Class* get_class() {
            return il2cpp::get_class<app::MixerManager__Class>(type_info, "", "MixerManager");
        }
        inline app::MixerManager* create() {
            return il2cpp::create_object<app::MixerManager>(get_class());
        }
    } // namespace MixerManager
} // namespace app::classes::types
