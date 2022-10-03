#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stat__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stat__Enum__Class** type_info;
        inline app::Stat__Enum__Class* get_class() {
            return il2cpp::get_class<app::Stat__Enum__Class>(type_info, "Moon.Profile", "Stat");
        }
        inline app::Stat__Enum* create() {
            return il2cpp::create_object<app::Stat__Enum>(get_class());
        }
    } // namespace Stat__Enum
} // namespace app::classes::types
