#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MothSwarmer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MothSwarmer__Class** type_info;
        inline app::MothSwarmer__Class* get_class() {
            return il2cpp::get_class<app::MothSwarmer__Class>(type_info, "", "MothSwarmer");
        }
        inline app::MothSwarmer* create() {
            return il2cpp::create_object<app::MothSwarmer>(get_class());
        }
    } // namespace MothSwarmer
} // namespace app::classes::types
