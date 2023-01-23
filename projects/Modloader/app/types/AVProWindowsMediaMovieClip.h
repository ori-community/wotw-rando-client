#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AVProWindowsMediaMovieClip__Class.h>
#include <Modloader/app/structs/AVProWindowsMediaMovieClip.h>
#include <Modloader/app/structs/AVProWindowsMediaMovieClip__Array.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovieClip {
        inline app::AVProWindowsMediaMovieClip__Class** type_info = (app::AVProWindowsMediaMovieClip__Class**)(modloader::win::memory::resolve_rva(0x0472CA28));
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
