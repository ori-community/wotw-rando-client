#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtificialSoundHost__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtificialSoundHost__Array__Class** type_info;
        inline app::ArtificialSoundHost__Array__Class* get_class() {
            return il2cpp::get_class<app::ArtificialSoundHost__Array__Class>(type_info, "Moon.Wwise", "ArtificialSoundHost[]");
        }
        inline app::ArtificialSoundHost__Array* create() {
            return il2cpp::create_object<app::ArtificialSoundHost__Array>(get_class());
        }
    } // namespace ArtificialSoundHost__Array
} // namespace app::classes::types
