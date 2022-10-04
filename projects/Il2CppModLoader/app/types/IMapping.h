#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMapping__Class** type_info;
        inline app::IMapping__Class* get_class() {
            return il2cpp::get_class<app::IMapping__Class>(type_info, "", "IMapping");
        }
        inline app::IMapping* create() {
            return il2cpp::create_object<app::IMapping>(get_class());
        }
    } // namespace IMapping
} // namespace app::classes::types
