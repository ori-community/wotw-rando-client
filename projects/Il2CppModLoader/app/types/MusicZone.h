#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MusicZone__Class** type_info;
        inline app::MusicZone__Class* get_class() {
            return il2cpp::get_class<app::MusicZone__Class>(type_info, "", "MusicZone");
        }
        inline app::MusicZone* create() {
            return il2cpp::create_object<app::MusicZone>(get_class());
        }
        inline app::MusicZone__Array* create_array(int size) {
            return il2cpp::array_new<app::MusicZone__Array>(get_class(), size);
        }
    } // namespace MusicZone
} // namespace app::classes::types
