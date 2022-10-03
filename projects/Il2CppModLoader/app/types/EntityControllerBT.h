#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityControllerBT {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityControllerBT__Class** type_info;
        inline app::EntityControllerBT__Class* get_class() {
            return il2cpp::get_class<app::EntityControllerBT__Class>(type_info, "", "EntityControllerBT");
        }
        inline app::EntityControllerBT* create() {
            return il2cpp::create_object<app::EntityControllerBT>(get_class());
        }
    } // namespace EntityControllerBT
} // namespace app::classes::types
