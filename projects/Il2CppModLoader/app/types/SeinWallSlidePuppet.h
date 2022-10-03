#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinWallSlidePuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinWallSlidePuppet__Class** type_info;
        inline app::SeinWallSlidePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinWallSlidePuppet__Class>(type_info, "", "SeinWallSlidePuppet");
        }
        inline app::SeinWallSlidePuppet* create() {
            return il2cpp::create_object<app::SeinWallSlidePuppet>(get_class());
        }
    } // namespace SeinWallSlidePuppet
} // namespace app::classes::types
