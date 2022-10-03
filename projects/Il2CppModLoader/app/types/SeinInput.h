#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinInput__Class** type_info;
        inline app::SeinInput__Class* get_class() {
            return il2cpp::get_class<app::SeinInput__Class>(type_info, "", "SeinInput");
        }
        inline app::SeinInput* create() {
            return il2cpp::create_object<app::SeinInput>(get_class());
        }
    } // namespace SeinInput
} // namespace app::classes::types
