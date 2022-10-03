#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementWrapper__Class** type_info;
        inline app::XElementWrapper__Class* get_class() {
            return il2cpp::get_class<app::XElementWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XElementWrapper");
        }
        inline app::XElementWrapper* create() {
            return il2cpp::create_object<app::XElementWrapper>(get_class());
        }
    } // namespace XElementWrapper
} // namespace app::classes::types
