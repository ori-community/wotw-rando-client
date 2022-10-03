#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinIdlePuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinIdlePuppet__Class** type_info;
        inline app::SeinIdlePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinIdlePuppet__Class>(type_info, "", "SeinIdlePuppet");
        }
        inline app::SeinIdlePuppet* create() {
            return il2cpp::create_object<app::SeinIdlePuppet>(get_class());
        }
    } // namespace SeinIdlePuppet
} // namespace app::classes::types
