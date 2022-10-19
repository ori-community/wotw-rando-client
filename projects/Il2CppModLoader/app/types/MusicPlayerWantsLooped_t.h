#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicPlayerWantsLooped_t {
        namespace {
            inline app::MusicPlayerWantsLooped_t__Class* type_info_ref = nullptr;
        }
        inline app::MusicPlayerWantsLooped_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWantsLooped_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsLooped_t__Class>(type_info, "Steamworks", "MusicPlayerWantsLooped_t");
        }
        inline app::MusicPlayerWantsLooped_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsLooped_t>(get_class());
        }
        inline app::MusicPlayerWantsLooped_t__Boxed* box(app::MusicPlayerWantsLooped_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsLooped_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsLooped_t
} // namespace app::classes::types
