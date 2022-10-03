#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundHost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundHost__Class** type_info;
        inline app::SoundHost__Class* get_class() {
            return il2cpp::get_class<app::SoundHost__Class>(type_info, "Moon.Wwise", "SoundHost");
        }
        inline app::SoundHost* create() {
            return il2cpp::create_object<app::SoundHost>(get_class());
        }
        inline app::SoundHost__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundHost__Array>(get_class(), size);
        }
    } // namespace SoundHost
} // namespace app::classes::types
