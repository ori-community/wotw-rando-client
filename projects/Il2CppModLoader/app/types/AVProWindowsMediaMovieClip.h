#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovieClip {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AVProWindowsMediaMovieClip__Class** type_info;
        inline app::AVProWindowsMediaMovieClip__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovieClip__Class>(type_info, "", "AVProWindowsMediaMovieClip");
        }
        inline app::AVProWindowsMediaMovieClip* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovieClip>(get_class());
        }
        inline app::AVProWindowsMediaMovieClip__Array* create_array(int size) {
            return il2cpp::array_new<app::AVProWindowsMediaMovieClip__Array>(get_class(), size);
        }
        inline app::AVProWindowsMediaMovieClip__Array* create_array(const std::vector<app::AVProWindowsMediaMovieClip*>& items) {
            return il2cpp::array_new<app::AVProWindowsMediaMovieClip__Array>(get_class(), items);
        }
    } // namespace AVProWindowsMediaMovieClip
} // namespace app::classes::types
