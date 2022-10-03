#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityData__Class** type_info;
        inline app::EntityData__Class* get_class() {
            return il2cpp::get_class<app::EntityData__Class>(type_info, "", "EntityData");
        }
        inline app::EntityData* create() {
            return il2cpp::create_object<app::EntityData>(get_class());
        }
    } // namespace EntityData
} // namespace app::classes::types
