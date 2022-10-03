#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XContainer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XContainer__Class** type_info;
        inline app::XContainer__Class* get_class() {
            return il2cpp::get_class<app::XContainer__Class>(type_info, "System.Xml.Linq", "XContainer");
        }
        inline app::XContainer* create() {
            return il2cpp::create_object<app::XContainer>(get_class());
        }
    } // namespace XContainer
} // namespace app::classes::types
