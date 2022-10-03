#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWantsShuffled_t {
        namespace {
            app::MusicPlayerWantsShuffled_t__Class* type_info_ref = nullptr;
        }
        app::MusicPlayerWantsShuffled_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWantsShuffled_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsShuffled_t__Class>(type_info, "Steamworks", "MusicPlayerWantsShuffled_t");
        }
        inline app::MusicPlayerWantsShuffled_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsShuffled_t>(get_class());
        }
        inline app::MusicPlayerWantsShuffled_t__Boxed* box(app::MusicPlayerWantsShuffled_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsShuffled_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsShuffled_t
} // namespace app::classes::types
