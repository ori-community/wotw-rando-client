#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrInitFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_XdrInitFunction__Class** type_info;
        inline app::XdrBuilder_XdrInitFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrInitFunction__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "XdrInitFunction");
        }
        inline app::XdrBuilder_XdrInitFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrInitFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrInitFunction
} // namespace app::classes::types
