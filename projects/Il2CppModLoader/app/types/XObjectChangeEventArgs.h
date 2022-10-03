#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XObjectChangeEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XObjectChangeEventArgs__Class** type_info;
        inline app::XObjectChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XObjectChangeEventArgs__Class>(type_info, "System.Xml.Linq", "XObjectChangeEventArgs");
        }
        inline app::XObjectChangeEventArgs* create() {
            return il2cpp::create_object<app::XObjectChangeEventArgs>(get_class());
        }
    } // namespace XObjectChangeEventArgs
} // namespace app::classes::types
