#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDashNewPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDashNewPuppet__Class** type_info;
        inline app::SeinDashNewPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDashNewPuppet__Class>(type_info, "", "SeinDashNewPuppet");
        }
        inline app::SeinDashNewPuppet* create() {
            return il2cpp::create_object<app::SeinDashNewPuppet>(get_class());
        }
    } // namespace SeinDashNewPuppet
} // namespace app::classes::types
