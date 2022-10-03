#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MixerManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MixerManager_c__Class** type_info;
        inline app::MixerManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MixerManager_c__Class>(type_info, "", "MixerManager", "<>c");
        }
        inline app::MixerManager_c* create() {
            return il2cpp::create_object<app::MixerManager_c>(get_class());
        }
    } // namespace MixerManager_c
} // namespace app::classes::types
