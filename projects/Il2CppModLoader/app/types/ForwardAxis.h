#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForwardAxis {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ForwardAxis__Class** type_info;
        inline app::ForwardAxis__Class* get_class() {
            return il2cpp::get_class<app::ForwardAxis__Class>(type_info, "System.Xml.Schema", "ForwardAxis");
        }
        inline app::ForwardAxis* create() {
            return il2cpp::create_object<app::ForwardAxis>(get_class());
        }
    } // namespace ForwardAxis
} // namespace app::classes::types
