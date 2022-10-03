#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SandWormEntity__Class** type_info;
        inline app::SandWormEntity__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntity__Class>(type_info, "", "SandWormEntity");
        }
        inline app::SandWormEntity* create() {
            return il2cpp::create_object<app::SandWormEntity>(get_class());
        }
        inline app::SandWormEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::SandWormEntity__Array>(get_class(), size);
        }
    } // namespace SandWormEntity
} // namespace app::classes::types
