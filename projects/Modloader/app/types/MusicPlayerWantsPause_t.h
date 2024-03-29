#pragma once
#include <Modloader/app/structs/MusicPlayerWantsPause_t.h>
#include <Modloader/app/structs/MusicPlayerWantsPause_t__Boxed.h>
#include <Modloader/app/structs/MusicPlayerWantsPause_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPause_t {
        inline app::MusicPlayerWantsPause_t__Class** type_info() {
            static app::MusicPlayerWantsPause_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicPlayerWantsPause_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicPlayerWantsPause_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPause_t__Class>(type_info(), "Steamworks", "MusicPlayerWantsPause_t");
        }
        inline app::MusicPlayerWantsPause_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPause_t>(get_class());
        }
        inline app::MusicPlayerWantsPause_t__Boxed* box(app::MusicPlayerWantsPause_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPause_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPause_t
} // namespace app::classes::types
