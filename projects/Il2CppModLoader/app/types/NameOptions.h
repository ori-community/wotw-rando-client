#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameOptions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameOptions__Class** type_info;
        inline app::NameOptions__Class* get_class() {
            return il2cpp::get_class<app::NameOptions__Class>(type_info, "", "NameOptions");
        }
        inline app::NameOptions* create() {
            return il2cpp::create_object<app::NameOptions>(get_class());
        }
    } // namespace NameOptions
} // namespace app::classes::types
