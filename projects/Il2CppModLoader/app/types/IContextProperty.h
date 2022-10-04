#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContextProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContextProperty__Class** type_info;
        inline app::IContextProperty__Class* get_class() {
            return il2cpp::get_class<app::IContextProperty__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContextProperty");
        }
        inline app::IContextProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::IContextProperty__Array>(get_class(), size);
        }
    } // namespace IContextProperty
} // namespace app::classes::types
