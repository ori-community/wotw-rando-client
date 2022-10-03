#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder__Class** type_info;
        inline app::XdrBuilder__Class* get_class() {
            return il2cpp::get_class<app::XdrBuilder__Class>(type_info, "System.Xml.Schema", "XdrBuilder");
        }
        inline app::XdrBuilder* create() {
            return il2cpp::create_object<app::XdrBuilder>(get_class());
        }
    } // namespace XdrBuilder
} // namespace app::classes::types
