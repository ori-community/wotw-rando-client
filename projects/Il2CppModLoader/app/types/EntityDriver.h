#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityDriver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityDriver__Class** type_info;
        inline app::EntityDriver__Class* get_class() {
            return il2cpp::get_class<app::EntityDriver__Class>(type_info, "", "EntityDriver");
        }
        inline app::EntityDriver* create() {
            return il2cpp::create_object<app::EntityDriver>(get_class());
        }
    } // namespace EntityDriver
} // namespace app::classes::types
