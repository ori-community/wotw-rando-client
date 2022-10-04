#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISwarmer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISwarmer__Class** type_info;
        inline app::ISwarmer__Class* get_class() {
            return il2cpp::get_class<app::ISwarmer__Class>(type_info, "", "ISwarmer");
        }
        inline app::ISwarmer* create() {
            return il2cpp::create_object<app::ISwarmer>(get_class());
        }
    } // namespace ISwarmer
} // namespace app::classes::types
