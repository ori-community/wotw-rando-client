#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWillQuit_t {
        namespace {
            app::MusicPlayerWillQuit_t__Class* type_info_ref = nullptr;
        }
        app::MusicPlayerWillQuit_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWillQuit_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWillQuit_t__Class>(type_info, "Steamworks", "MusicPlayerWillQuit_t");
        }
        inline app::MusicPlayerWillQuit_t* create() {
            return il2cpp::create_object<app::MusicPlayerWillQuit_t>(get_class());
        }
        inline app::MusicPlayerWillQuit_t__Boxed* box(app::MusicPlayerWillQuit_t value) {
            return il2cpp::box_value<app::MusicPlayerWillQuit_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWillQuit_t
} // namespace app::classes::types
