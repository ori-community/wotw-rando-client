#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContextProperty__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContextProperty__Array__Class** type_info;
        inline app::IContextProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::IContextProperty__Array__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContextProperty[]");
        }
        inline app::IContextProperty__Array* create() {
            return il2cpp::create_object<app::IContextProperty__Array>(get_class());
        }
    } // namespace IContextProperty__Array
} // namespace app::classes::types
