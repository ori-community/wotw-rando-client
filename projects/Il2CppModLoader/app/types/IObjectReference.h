#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IObjectReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IObjectReference__Class** type_info;
        inline app::IObjectReference__Class* get_class() {
            return il2cpp::get_class<app::IObjectReference__Class>(type_info, "System.Runtime.Serialization", "IObjectReference");
        }
        inline app::IObjectReference* create() {
            return il2cpp::create_object<app::IObjectReference>(get_class());
        }
    } // namespace IObjectReference
} // namespace app::classes::types
