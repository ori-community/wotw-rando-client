#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XObjectWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XObjectWrapper__Class** type_info;
        inline app::XObjectWrapper__Class* get_class() {
            return il2cpp::get_class<app::XObjectWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XObjectWrapper");
        }
        inline app::XObjectWrapper* create() {
            return il2cpp::create_object<app::XObjectWrapper>(get_class());
        }
    } // namespace XObjectWrapper
} // namespace app::classes::types
