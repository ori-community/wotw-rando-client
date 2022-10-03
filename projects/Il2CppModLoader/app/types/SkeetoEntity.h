#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkeetoEntity__Class** type_info;
        inline app::SkeetoEntity__Class* get_class() {
            return il2cpp::get_class<app::SkeetoEntity__Class>(type_info, "", "SkeetoEntity");
        }
        inline app::SkeetoEntity* create() {
            return il2cpp::create_object<app::SkeetoEntity>(get_class());
        }
    } // namespace SkeetoEntity
} // namespace app::classes::types
