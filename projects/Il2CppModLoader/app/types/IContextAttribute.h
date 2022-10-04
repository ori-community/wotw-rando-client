#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContextAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContextAttribute__Class** type_info;
        inline app::IContextAttribute__Class* get_class() {
            return il2cpp::get_class<app::IContextAttribute__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContextAttribute");
        }
        inline app::IContextAttribute* create() {
            return il2cpp::create_object<app::IContextAttribute>(get_class());
        }
        inline app::IContextAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::IContextAttribute__Array>(get_class(), size);
        }
    } // namespace IContextAttribute
} // namespace app::classes::types
