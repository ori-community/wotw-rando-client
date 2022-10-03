#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Filter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Filter__Class** type_info;
        inline app::Filter__Class* get_class() {
            return il2cpp::get_class<app::Filter__Class>(type_info, "MS.Internal.Xml.XPath", "Filter");
        }
        inline app::Filter* create() {
            return il2cpp::create_object<app::Filter>(get_class());
        }
    } // namespace Filter
} // namespace app::classes::types
