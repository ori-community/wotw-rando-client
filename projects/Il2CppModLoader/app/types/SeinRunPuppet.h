#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinRunPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinRunPuppet__Class** type_info;
        inline app::SeinRunPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinRunPuppet__Class>(type_info, "", "SeinRunPuppet");
        }
        inline app::SeinRunPuppet* create() {
            return il2cpp::create_object<app::SeinRunPuppet>(get_class());
        }
    } // namespace SeinRunPuppet
} // namespace app::classes::types
