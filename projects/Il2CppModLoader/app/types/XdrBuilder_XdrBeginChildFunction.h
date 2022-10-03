#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XdrBuilder_XdrBeginChildFunction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XdrBuilder_XdrBeginChildFunction__Class** type_info;
        inline app::XdrBuilder_XdrBeginChildFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::XdrBuilder_XdrBeginChildFunction__Class>(type_info, "System.Xml.Schema", "XdrBuilder", "XdrBeginChildFunction");
        }
        inline app::XdrBuilder_XdrBeginChildFunction* create() {
            return il2cpp::create_object<app::XdrBuilder_XdrBeginChildFunction>(get_class());
        }
    } // namespace XdrBuilder_XdrBeginChildFunction
} // namespace app::classes::types
