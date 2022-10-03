#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Music_MusicTrack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Music_MusicTrack__Class** type_info;
        inline app::Music_MusicTrack__Class* get_class() {
            return il2cpp::get_nested_class<app::Music_MusicTrack__Class>(type_info, "Core", "Music", "MusicTrack");
        }
        inline app::Music_MusicTrack* create() {
            return il2cpp::create_object<app::Music_MusicTrack>(get_class());
        }
        inline app::Music_MusicTrack__Array* create_array(int size) {
            return il2cpp::array_new<app::Music_MusicTrack__Array>(get_class(), size);
        }
    } // namespace Music_MusicTrack
} // namespace app::classes::types
