#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AllowedEntityArea {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AllowedEntityArea__Class** type_info;
        inline app::AllowedEntityArea__Class* get_class() {
            return il2cpp::get_class<app::AllowedEntityArea__Class>(type_info, "", "AllowedEntityArea");
        }
        inline app::AllowedEntityArea* create() {
            return il2cpp::create_object<app::AllowedEntityArea>(get_class());
        }
    } // namespace AllowedEntityArea
} // namespace app::classes::types
