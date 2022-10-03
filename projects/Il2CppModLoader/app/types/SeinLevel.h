#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLevel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinLevel__Class** type_info;
        inline app::SeinLevel__Class* get_class() {
            return il2cpp::get_class<app::SeinLevel__Class>(type_info, "", "SeinLevel");
        }
        inline app::SeinLevel* create() {
            return il2cpp::create_object<app::SeinLevel>(get_class());
        }
    } // namespace SeinLevel
} // namespace app::classes::types
