#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrEndChildFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_XdrEndChildFunction__Class** type_info;
        inline app::XdrBuilder_XdrEndChildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrEndChildFunction__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "XdrEndChildFunction");
        }
        inline app::XdrBuilder_XdrEndChildFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrEndChildFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrEndChildFunction
} // namespace app::classes::types
