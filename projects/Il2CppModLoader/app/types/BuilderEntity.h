#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderEntity__Class** type_info;
        inline app::BuilderEntity__Class* get_class() {
            return il2cpp::get_class<app::BuilderEntity__Class>(type_info, "", "BuilderEntity");
        }
        inline app::BuilderEntity* create() {
            return il2cpp::create_object<app::BuilderEntity>(get_class());
        }
    } // namespace BuilderEntity
} // namespace app::classes::types
