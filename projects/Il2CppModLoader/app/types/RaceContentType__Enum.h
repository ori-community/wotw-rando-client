#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceContentType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceContentType__Enum__Class** type_info;
        inline app::RaceContentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceContentType__Enum__Class>(type_info, "", "RaceContentType");
        }
        inline app::RaceContentType__Enum* create() {
            return il2cpp::create_object<app::RaceContentType__Enum>(get_class());
        }
    } // namespace RaceContentType__Enum
} // namespace app::classes::types
