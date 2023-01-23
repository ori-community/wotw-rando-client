#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AVProWindowsMediaMovieFromResource__Class.h>
#include <Modloader/app/structs/AVProWindowsMediaMovieFromResource.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovieFromResource {
        namespace {
            inline app::AVProWindowsMediaMovieFromResource__Class* type_info_ref = nullptr;
        }
        inline app::AVProWindowsMediaMovieFromResource__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaMovieFromResource__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovieFromResource__Class>(type_info, "", "AVProWindowsMediaMovieFromResource");
        }
        inline app::AVProWindowsMediaMovieFromResource* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovieFromResource>(get_class());
        }
    } // namespace AVProWindowsMediaMovieFromResource
} // namespace app::classes::types
