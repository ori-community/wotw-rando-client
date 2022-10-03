#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinFallPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinFallPuppet__Class** type_info;
        inline app::SeinFallPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinFallPuppet__Class>(type_info, "", "SeinFallPuppet");
        }
        inline app::SeinFallPuppet* create() {
            return il2cpp::create_object<app::SeinFallPuppet>(get_class());
        }
    } // namespace SeinFallPuppet
} // namespace app::classes::types
