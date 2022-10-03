#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDiggingPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDiggingPuppet__Class** type_info;
        inline app::SeinDiggingPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDiggingPuppet__Class>(type_info, "", "SeinDiggingPuppet");
        }
        inline app::SeinDiggingPuppet* create() {
            return il2cpp::create_object<app::SeinDiggingPuppet>(get_class());
        }
    } // namespace SeinDiggingPuppet
} // namespace app::classes::types
