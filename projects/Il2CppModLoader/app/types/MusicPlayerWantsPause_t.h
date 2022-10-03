#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPause_t {
        namespace {
            app::MusicPlayerWantsPause_t__Class* type_info_ref = nullptr;
        }
        app::MusicPlayerWantsPause_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWantsPause_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPause_t__Class>(type_info, "Steamworks", "MusicPlayerWantsPause_t");
        }
        inline app::MusicPlayerWantsPause_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPause_t>(get_class());
        }
        inline app::MusicPlayerWantsPause_t__Boxed* box(app::MusicPlayerWantsPause_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPause_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPause_t
} // namespace app::classes::types
