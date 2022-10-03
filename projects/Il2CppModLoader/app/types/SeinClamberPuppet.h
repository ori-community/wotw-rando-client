#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinClamberPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinClamberPuppet__Class** type_info;
        inline app::SeinClamberPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinClamberPuppet__Class>(type_info, "", "SeinClamberPuppet");
        }
        inline app::SeinClamberPuppet* create() {
            return il2cpp::create_object<app::SeinClamberPuppet>(get_class());
        }
    } // namespace SeinClamberPuppet
} // namespace app::classes::types
