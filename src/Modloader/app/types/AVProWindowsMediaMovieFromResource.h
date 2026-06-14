#pragma once
#include <Modloader/app/structs/AVProWindowsMediaMovieFromResource.h>
#include <Modloader/app/structs/AVProWindowsMediaMovieFromResource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovieFromResource {
        inline app::AVProWindowsMediaMovieFromResource__Class** type_info() {
            static app::AVProWindowsMediaMovieFromResource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AVProWindowsMediaMovieFromResource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AVProWindowsMediaMovieFromResource__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovieFromResource__Class>(type_info(), "", "AVProWindowsMediaMovieFromResource");
        }
        inline app::AVProWindowsMediaMovieFromResource* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovieFromResource>(get_class());
        }
    } // namespace AVProWindowsMediaMovieFromResource
} // namespace app::classes::types
