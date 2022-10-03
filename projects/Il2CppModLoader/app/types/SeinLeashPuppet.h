#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLeashPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinLeashPuppet__Class** type_info;
        inline app::SeinLeashPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinLeashPuppet__Class>(type_info, "", "SeinLeashPuppet");
        }
        inline app::SeinLeashPuppet* create() {
            return il2cpp::create_object<app::SeinLeashPuppet>(get_class());
        }
    } // namespace SeinLeashPuppet
} // namespace app::classes::types
