#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDeathCounter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDeathCounter__Class** type_info;
        inline app::SeinDeathCounter__Class* get_class() {
            return il2cpp::get_class<app::SeinDeathCounter__Class>(type_info, "", "SeinDeathCounter");
        }
        inline app::SeinDeathCounter* create() {
            return il2cpp::create_object<app::SeinDeathCounter>(get_class());
        }
    } // namespace SeinDeathCounter
} // namespace app::classes::types
