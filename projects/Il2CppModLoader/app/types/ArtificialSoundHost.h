#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtificialSoundHost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtificialSoundHost__Class** type_info;
        inline app::ArtificialSoundHost__Class* get_class() {
            return il2cpp::get_class<app::ArtificialSoundHost__Class>(type_info, "Moon.Wwise", "ArtificialSoundHost");
        }
        inline app::ArtificialSoundHost* create() {
            return il2cpp::create_object<app::ArtificialSoundHost>(get_class());
        }
        inline app::ArtificialSoundHost__Array* create_array(int size) {
            return il2cpp::array_new<app::ArtificialSoundHost__Array>(get_class(), size);
        }
        inline app::ArtificialSoundHost__Array* create_array(const std::vector<app::ArtificialSoundHost*>& items) {
            return il2cpp::array_new<app::ArtificialSoundHost__Array>(get_class(), items);
        }
    } // namespace ArtificialSoundHost
} // namespace app::classes::types
