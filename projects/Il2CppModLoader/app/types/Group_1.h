#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Group_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Group_1__Class** type_info;
        inline app::Group_1__Class* get_class() {
            return il2cpp::get_class<app::Group_1__Class>(type_info, "MS.Internal.Xml.XPath", "Group");
        }
        inline app::Group_1* create() {
            return il2cpp::create_object<app::Group_1>(get_class());
        }
    } // namespace Group_1
} // namespace app::classes::types
