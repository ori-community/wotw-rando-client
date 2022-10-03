#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDrillPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDrillPuppet__Class** type_info;
        inline app::SeinDrillPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDrillPuppet__Class>(type_info, "", "SeinDrillPuppet");
        }
        inline app::SeinDrillPuppet* create() {
            return il2cpp::create_object<app::SeinDrillPuppet>(get_class());
        }
    } // namespace SeinDrillPuppet
} // namespace app::classes::types
