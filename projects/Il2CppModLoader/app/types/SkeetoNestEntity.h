#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoNestEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoNestEntity__Class** type_info;
        inline app::SkeetoNestEntity__Class* get_class() {
            return il2cpp::get_class<app::SkeetoNestEntity__Class>(type_info, "", "SkeetoNestEntity");
        }
        inline app::SkeetoNestEntity* create() {
            return il2cpp::create_object<app::SkeetoNestEntity>(get_class());
        }
    } // namespace SkeetoNestEntity
} // namespace app::classes::types
