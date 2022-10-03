#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovieFromResource {
        namespace {
            app::AVProWindowsMediaMovieFromResource__Class* type_info_ref = nullptr;
        }
        app::AVProWindowsMediaMovieFromResource__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaMovieFromResource__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovieFromResource__Class>(type_info, "", "AVProWindowsMediaMovieFromResource");
        }
        inline app::AVProWindowsMediaMovieFromResource* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovieFromResource>(get_class());
        }
    } // namespace AVProWindowsMediaMovieFromResource
} // namespace app::classes::types
