#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MarshalAsAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MarshalAsAttribute__Class** type_info;
        inline app::MarshalAsAttribute__Class* get_class() {
            return il2cpp::get_class<app::MarshalAsAttribute__Class>(type_info, "System.Runtime.InteropServices", "MarshalAsAttribute");
        }
        inline app::MarshalAsAttribute* create() {
            return il2cpp::create_object<app::MarshalAsAttribute>(get_class());
        }
    } // namespace MarshalAsAttribute
} // namespace app::classes::types
