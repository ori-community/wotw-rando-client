#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Root {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Root__Class** type_info;
        inline app::Root__Class* get_class() {
            return il2cpp::get_class<app::Root__Class>(type_info, "MS.Internal.Xml.XPath", "Root");
        }
        inline app::Root* create() {
            return il2cpp::create_object<app::Root>(get_class());
        }
    } // namespace Root
} // namespace app::classes::types
