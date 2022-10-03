#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundDescriptor__Class** type_info;
        inline app::SoundDescriptor__Class* get_class() {
            return il2cpp::get_class<app::SoundDescriptor__Class>(type_info, "", "SoundDescriptor");
        }
        inline app::SoundDescriptor* create() {
            return il2cpp::create_object<app::SoundDescriptor>(get_class());
        }
    } // namespace SoundDescriptor
} // namespace app::classes::types
