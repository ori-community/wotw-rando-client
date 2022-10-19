#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovieClip__Array {
        namespace {
            inline app::AVProWindowsMediaMovieClip__Array__Class* type_info_ref = nullptr;
        }
        inline app::AVProWindowsMediaMovieClip__Array__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaMovieClip__Array__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovieClip__Array__Class>(type_info, "", "AVProWindowsMediaMovieClip[]");
        }
        inline app::AVProWindowsMediaMovieClip__Array* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovieClip__Array>(get_class());
        }
    } // namespace AVProWindowsMediaMovieClip__Array
} // namespace app::classes::types
