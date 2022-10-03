#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBowPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBowPuppet__Class** type_info;
        inline app::SeinBowPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinBowPuppet__Class>(type_info, "", "SeinBowPuppet");
        }
        inline app::SeinBowPuppet* create() {
            return il2cpp::create_object<app::SeinBowPuppet>(get_class());
        }
    } // namespace SeinBowPuppet
} // namespace app::classes::types
